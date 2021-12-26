#include "main.h"
int main(int argv, char **args)
{
    SDL_Init(SDL_INIT_VIDEO | SDL_INIT_EVENTS);
    SDL_Window *window;
    window = SDL_CreateWindow("SDL Vulkan Sample", 0, 0, 600, 400,
                                       SDL_WINDOW_SHOWN | SDL_WINDOW_VULKAN);
    



    VkApplicationInfo appInfo = {};
    appInfo.sType = VK_STRUCTURE_TYPE_APPLICATION_INFO;
    appInfo.pApplicationName = "Hello Triangle";
    appInfo.applicationVersion = VK_MAKE_VERSION(1, 0, 0);
    appInfo.pEngineName = "No Engine";
    appInfo.engineVersion = VK_MAKE_VERSION(1, 0, 0);
    appInfo.apiVersion = VK_API_VERSION_1_0;


    VkInstanceCreateInfo createInfo = {};
    createInfo.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
    createInfo.pApplicationInfo = &appInfo;
    VkInstance instance;

    if (vkCreateInstance(&createInfo, nullptr, &instance) != VK_SUCCESS) {
        throw std::runtime_error("failed to create instance!");
    }
    else{
        cout << "all good\n";
    }

uint32_t extensionCount = 0;
std::vector<VkExtensionProperties> extensions(extensionCount);

vkEnumerateInstanceExtensionProperties(nullptr, &extensionCount, extensions.data());


std::cout << "available extensions:\n";

for (const auto& extension : extensions) {
    std::cout << '\t' << extension.extensionName << '\n';
}

VkPhysicalDevice physicalDevice = VK_NULL_HANDLE;
uint32_t deviceCount = 0;
vkEnumeratePhysicalDevices(instance, &deviceCount, nullptr);

if (deviceCount == 0) {
    throw std::runtime_error("failed to find GPUs with Vulkan support!");
}
else{
    cout << "devices: " << deviceCount << "\n";
}


vkDestroyInstance(instance, nullptr);

    cout << "outty\n";
    string tester;
    cin >> tester;
    return 0;
    
}