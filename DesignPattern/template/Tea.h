#pragma once

class Tea
{
public:
    Tea() = default;
    ~Tea() = default;

public:
    // 烧水
    void SoilWater();

    // 泡茶叶
    void SteepTea();

    // 倒进杯子里
    void PourCup();

    // 加柠檬
    void AddLemon();
};