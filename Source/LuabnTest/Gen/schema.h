
//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

#pragma once
#include <functional>
#include <algorithm>

#include "../luban/CfgBean.h"

namespace cfg {

 
    enum class EPlayInterval
    {
        /// <summary>
        /// 短
        /// </summary>
        Short = 0,
        /// <summary>
        /// 长
        /// </summary>
        Long = 1,
        /// <summary>
        /// 永不
        /// </summary>
        Never = 2,
    };

 


 
    enum class ECharacterScale
    {
        /// <summary>
        /// 小
        /// </summary>
        Small = 0,
        /// <summary>
        /// 中
        /// </summary>
        Medium = 1,
        /// <summary>
        /// 大
        /// </summary>
        Large = 2,
    };

 


 struct vector2; 
 struct vector3; 
 struct vector4; 
 struct CharacterData; 
 struct CharacterAnim; 
namespace Character { struct AnimDia; }
 struct CharacterSet; 
 struct CharacterUI; 
 struct CharacterSkin; 
 struct Rare; 
 struct Translate; 
 struct Advenrture; 
 struct Income; 
 struct Setting; 
 struct Record; 
 struct Discoration; 
 struct Timer; 



struct vector2 : public luban::CfgBean 
{
    static bool deserializevector2(::luban::ByteBuf& _buf, ::luban::SharedPtr<vector2>& _out);

    virtual ~vector2() {}

    bool deserialize(::luban::ByteBuf& _buf);

    ::luban::float32 x;
    ::luban::float32 y;

    static constexpr int __ID__ = 337790799;

    int getTypeId() const override { return __ID__; }
};





struct vector3 : public luban::CfgBean 
{
    static bool deserializevector3(::luban::ByteBuf& _buf, ::luban::SharedPtr<vector3>& _out);

    virtual ~vector3() {}

    bool deserialize(::luban::ByteBuf& _buf);

    ::luban::float32 x;
    ::luban::float32 y;
    ::luban::float32 z;

    static constexpr int __ID__ = 337790800;

    int getTypeId() const override { return __ID__; }
};





struct vector4 : public luban::CfgBean 
{
    static bool deserializevector4(::luban::ByteBuf& _buf, ::luban::SharedPtr<vector4>& _out);

    virtual ~vector4() {}

    bool deserialize(::luban::ByteBuf& _buf);

    ::luban::float32 x;
    ::luban::float32 y;
    ::luban::float32 z;
    ::luban::float32 w;

    static constexpr int __ID__ = 337790801;

    int getTypeId() const override { return __ID__; }
};





struct CharacterData : public luban::CfgBean 
{
    static bool deserializeCharacterData(::luban::ByteBuf& _buf, ::luban::SharedPtr<CharacterData>& _out);

    virtual ~CharacterData() {}

    bool deserialize(::luban::ByteBuf& _buf);

    /**
     * 编号
     */
    ::luban::int32 id;
    /**
     * 稀有度
     */
    ::luban::int32 rare;
    /**
     * 动画编号
     */
    ::luban::int32 anim;
    /**
     * 设定编号
     */
    ::luban::int32 setting;
    /**
     * UI编号
     */
    ::luban::int32 UI;
    /**
     * 服装编号
     */
    ::luban::int32 skin;

    static constexpr int __ID__ = -991456685;

    int getTypeId() const override { return __ID__; }
};





struct CharacterAnim : public luban::CfgBean 
{
    static bool deserializeCharacterAnim(::luban::ByteBuf& _buf, ::luban::SharedPtr<CharacterAnim>& _out);

    virtual ~CharacterAnim() {}

    bool deserialize(::luban::ByteBuf& _buf);

    /**
     * 编号
     */
    ::luban::int32 id;
    ::luban::Vector<::luban::SharedPtr<Character::AnimDia>> idle;
    ::luban::Vector<::luban::SharedPtr<Character::AnimDia>> unused;
    ::luban::Vector<::luban::SharedPtr<Character::AnimDia>> touch;
    ::luban::Vector<::luban::SharedPtr<Character::AnimDia>> drag;
    ::luban::Vector<::luban::SharedPtr<Character::AnimDia>> inAdventure;
    ::luban::Vector<::luban::SharedPtr<Character::AnimDia>> outAdventure;

    static constexpr int __ID__ = -991533894;

    int getTypeId() const override { return __ID__; }
};



namespace Character {

struct AnimDia : public luban::CfgBean 
{
    static bool deserializeAnimDia(::luban::ByteBuf& _buf, ::luban::SharedPtr<AnimDia>& _out);

    virtual ~AnimDia() {}

    bool deserialize(::luban::ByteBuf& _buf);

    /**
     * 动画名
     */
    ::luban::String Anim;
    /**
     * 台词内容
     */
    ::luban::String Dia;

    static constexpr int __ID__ = 1940205222;

    int getTypeId() const override { return __ID__; }
};

}



struct CharacterSet : public luban::CfgBean 
{
    static bool deserializeCharacterSet(::luban::ByteBuf& _buf, ::luban::SharedPtr<CharacterSet>& _out);

    virtual ~CharacterSet() {}

    bool deserialize(::luban::ByteBuf& _buf);

    /**
     * 编号
     */
    ::luban::int32 id;
    /**
     * 名字
     */
    ::luban::String name;
    /**
     * 性别
     */
    ::luban::String sex;
    /**
     * 年龄
     */
    ::luban::String age;
    /**
     * 介绍
     */
    ::luban::String introduce;

    static constexpr int __ID__ = -1278893927;

    int getTypeId() const override { return __ID__; }
};





struct CharacterUI : public luban::CfgBean 
{
    static bool deserializeCharacterUI(::luban::ByteBuf& _buf, ::luban::SharedPtr<CharacterUI>& _out);

    virtual ~CharacterUI() {}

    bool deserialize(::luban::ByteBuf& _buf);

    /**
     * 编号
     */
    ::luban::int32 id;
    /**
     * 对话UI
     */
    ::luban::String diaUI;
    ::luban::SharedPtr<vector2> position;

    static constexpr int __ID__ = 1621313373;

    int getTypeId() const override { return __ID__; }
};





struct CharacterSkin : public luban::CfgBean 
{
    static bool deserializeCharacterSkin(::luban::ByteBuf& _buf, ::luban::SharedPtr<CharacterSkin>& _out);

    virtual ~CharacterSkin() {}

    bool deserialize(::luban::ByteBuf& _buf);

    /**
     * 编号
     */
    ::luban::int32 id;
    /**
     * 皮肤名
     */
    ::luban::Vector<::luban::String> skins;

    static constexpr int __ID__ = -991000538;

    int getTypeId() const override { return __ID__; }
};





struct Rare : public luban::CfgBean 
{
    static bool deserializeRare(::luban::ByteBuf& _buf, ::luban::SharedPtr<Rare>& _out);

    virtual ~Rare() {}

    bool deserialize(::luban::ByteBuf& _buf);

    /**
     * 编号
     */
    ::luban::int32 id;
    /**
     * 获取概率
     */
    ::luban::float32 proportion;

    static constexpr int __ID__ = 2539714;

    int getTypeId() const override { return __ID__; }
};





struct Translate : public luban::CfgBean 
{
    static bool deserializeTranslate(::luban::ByteBuf& _buf, ::luban::SharedPtr<Translate>& _out);

    virtual ~Translate() {}

    bool deserialize(::luban::ByteBuf& _buf);

    /**
     * 编号
     */
    ::luban::String key;
    ::luban::String CN;
    ::luban::String EN;
    ::luban::String JP;

    static constexpr int __ID__ = -1238167250;

    int getTypeId() const override { return __ID__; }
};





struct Advenrture : public luban::CfgBean 
{
    static bool deserializeAdvenrture(::luban::ByteBuf& _buf, ::luban::SharedPtr<Advenrture>& _out);

    virtual ~Advenrture() {}

    bool deserialize(::luban::ByteBuf& _buf);

    /**
     * 编号
     */
    ::luban::int32 id;
    /**
     * 名称
     */
    ::luban::String name;
    /**
     * 冒险时间，单位为分钟
     */
    ::luban::int32 adventureTime;
    /**
     * 休息时间，单位为分钟
     */
    ::luban::int32 restTime;
    /**
     * 收益抽取次数
     */
    ::luban::int32 income;

    static constexpr int __ID__ = 1949511914;

    int getTypeId() const override { return __ID__; }
};





struct Income : public luban::CfgBean 
{
    static bool deserializeIncome(::luban::ByteBuf& _buf, ::luban::SharedPtr<Income>& _out);

    virtual ~Income() {}

    bool deserialize(::luban::ByteBuf& _buf);

    /**
     * 编号
     */
    ::luban::int32 id;
    /**
     * 名称
     */
    ::luban::String name;
    /**
     * 概率
     */
    ::luban::float32 proportion;

    static constexpr int __ID__ = -2100392503;

    int getTypeId() const override { return __ID__; }
};





struct Setting : public luban::CfgBean 
{
    static bool deserializeSetting(::luban::ByteBuf& _buf, ::luban::SharedPtr<Setting>& _out);

    virtual ~Setting() {}

    bool deserialize(::luban::ByteBuf& _buf);

    /**
     * 待机动画播放间隔，单位秒
     */
    ::luban::HashMap<EPlayInterval, ::luban::int32> IdelPlayInterval;
    /**
     * 对话显示时长，单位秒
     */
    ::luban::float32 DialogueShowTime;

    static constexpr int __ID__ = -644372944;

    int getTypeId() const override { return __ID__; }
};





struct Record : public luban::CfgBean 
{
    static bool deserializeRecord(::luban::ByteBuf& _buf, ::luban::SharedPtr<Record>& _out);

    virtual ~Record() {}

    bool deserialize(::luban::ByteBuf& _buf);

    /**
     * 编号
     */
    ::luban::int32 id;
    /**
     * 名称
     */
    ::luban::String name;
    /**
     * 稀有度
     */
    ::luban::int32 rare;
    /**
     * 文件名
     */
    ::luban::String fileName;

    static constexpr int __ID__ = -1851041679;

    int getTypeId() const override { return __ID__; }
};





struct Discoration : public luban::CfgBean 
{
    static bool deserializeDiscoration(::luban::ByteBuf& _buf, ::luban::SharedPtr<Discoration>& _out);

    virtual ~Discoration() {}

    bool deserialize(::luban::ByteBuf& _buf);

    /**
     * 编号
     */
    ::luban::int32 id;
    /**
     * 名称
     */
    ::luban::String name;
    /**
     * 稀有度
     */
    ::luban::int32 rare;
    /**
     * 文件名
     */
    ::luban::String fileName;

    static constexpr int __ID__ = 1033534365;

    int getTypeId() const override { return __ID__; }
};





struct Timer : public luban::CfgBean 
{
    static bool deserializeTimer(::luban::ByteBuf& _buf, ::luban::SharedPtr<Timer>& _out);

    virtual ~Timer() {}

    bool deserialize(::luban::ByteBuf& _buf);

    /**
     * 编号
     */
    ::luban::int32 id;
    /**
     * 名称
     */
    ::luban::String name;
    /**
     * 稀有度
     */
    ::luban::int32 rare;
    /**
     * 文件名
     */
    ::luban::String fileName;

    static constexpr int __ID__ = 80811813;

    int getTypeId() const override { return __ID__; }
};



namespace Character {


class TbCharacterData
{
    private:
    ::luban::HashMap<::luban::int32, ::luban::SharedPtr<CharacterData>> _dataMap;
    ::luban::Vector<::luban::SharedPtr<CharacterData>> _dataList;
    
    public:
    bool load(::luban::ByteBuf& _buf)
    {        
        int n;
        if (!_buf.readSize(n)) return false;
        for(; n > 0 ; --n)
        {
            ::luban::SharedPtr<CharacterData> _v;
            if(!CharacterData::deserializeCharacterData(_buf, _v)) return false;
            _dataList.push_back(_v);
            _dataMap[_v->id] = _v;
        }
        return true;
    }

    const ::luban::HashMap<::luban::int32, ::luban::SharedPtr<CharacterData>>& getDataMap() const { return _dataMap; }
    const ::luban::Vector<::luban::SharedPtr<CharacterData>>& getDataList() const { return _dataList; }

    CharacterData* getRaw(::luban::int32 key)
    { 
        auto it = _dataMap.find(key);
        return it != _dataMap.end() ? it->second.get() : nullptr;
    }

    ::luban::SharedPtr<CharacterData> get(::luban::int32 key)
    { 
        auto it = _dataMap.find(key);
        return it != _dataMap.end() ? it->second : nullptr;
    }

};

}

namespace Character {


class TbCharacterAnim
{
    private:
    ::luban::HashMap<::luban::int32, ::luban::SharedPtr<CharacterAnim>> _dataMap;
    ::luban::Vector<::luban::SharedPtr<CharacterAnim>> _dataList;
    
    public:
    bool load(::luban::ByteBuf& _buf)
    {        
        int n;
        if (!_buf.readSize(n)) return false;
        for(; n > 0 ; --n)
        {
            ::luban::SharedPtr<CharacterAnim> _v;
            if(!CharacterAnim::deserializeCharacterAnim(_buf, _v)) return false;
            _dataList.push_back(_v);
            _dataMap[_v->id] = _v;
        }
        return true;
    }

    const ::luban::HashMap<::luban::int32, ::luban::SharedPtr<CharacterAnim>>& getDataMap() const { return _dataMap; }
    const ::luban::Vector<::luban::SharedPtr<CharacterAnim>>& getDataList() const { return _dataList; }

    CharacterAnim* getRaw(::luban::int32 key)
    { 
        auto it = _dataMap.find(key);
        return it != _dataMap.end() ? it->second.get() : nullptr;
    }

    ::luban::SharedPtr<CharacterAnim> get(::luban::int32 key)
    { 
        auto it = _dataMap.find(key);
        return it != _dataMap.end() ? it->second : nullptr;
    }

};

}

namespace Character {


class TbCharacterSet
{
    private:
    ::luban::HashMap<::luban::int32, ::luban::SharedPtr<CharacterSet>> _dataMap;
    ::luban::Vector<::luban::SharedPtr<CharacterSet>> _dataList;
    
    public:
    bool load(::luban::ByteBuf& _buf)
    {        
        int n;
        if (!_buf.readSize(n)) return false;
        for(; n > 0 ; --n)
        {
            ::luban::SharedPtr<CharacterSet> _v;
            if(!CharacterSet::deserializeCharacterSet(_buf, _v)) return false;
            _dataList.push_back(_v);
            _dataMap[_v->id] = _v;
        }
        return true;
    }

    const ::luban::HashMap<::luban::int32, ::luban::SharedPtr<CharacterSet>>& getDataMap() const { return _dataMap; }
    const ::luban::Vector<::luban::SharedPtr<CharacterSet>>& getDataList() const { return _dataList; }

    CharacterSet* getRaw(::luban::int32 key)
    { 
        auto it = _dataMap.find(key);
        return it != _dataMap.end() ? it->second.get() : nullptr;
    }

    ::luban::SharedPtr<CharacterSet> get(::luban::int32 key)
    { 
        auto it = _dataMap.find(key);
        return it != _dataMap.end() ? it->second : nullptr;
    }

};

}

namespace Character {


class TbCharacterUI
{
    private:
    ::luban::HashMap<::luban::int32, ::luban::SharedPtr<CharacterUI>> _dataMap;
    ::luban::Vector<::luban::SharedPtr<CharacterUI>> _dataList;
    
    public:
    bool load(::luban::ByteBuf& _buf)
    {        
        int n;
        if (!_buf.readSize(n)) return false;
        for(; n > 0 ; --n)
        {
            ::luban::SharedPtr<CharacterUI> _v;
            if(!CharacterUI::deserializeCharacterUI(_buf, _v)) return false;
            _dataList.push_back(_v);
            _dataMap[_v->id] = _v;
        }
        return true;
    }

    const ::luban::HashMap<::luban::int32, ::luban::SharedPtr<CharacterUI>>& getDataMap() const { return _dataMap; }
    const ::luban::Vector<::luban::SharedPtr<CharacterUI>>& getDataList() const { return _dataList; }

    CharacterUI* getRaw(::luban::int32 key)
    { 
        auto it = _dataMap.find(key);
        return it != _dataMap.end() ? it->second.get() : nullptr;
    }

    ::luban::SharedPtr<CharacterUI> get(::luban::int32 key)
    { 
        auto it = _dataMap.find(key);
        return it != _dataMap.end() ? it->second : nullptr;
    }

};

}

namespace Character {


class TbCharacterSkin
{
    private:
    ::luban::HashMap<::luban::int32, ::luban::SharedPtr<CharacterSkin>> _dataMap;
    ::luban::Vector<::luban::SharedPtr<CharacterSkin>> _dataList;
    
    public:
    bool load(::luban::ByteBuf& _buf)
    {        
        int n;
        if (!_buf.readSize(n)) return false;
        for(; n > 0 ; --n)
        {
            ::luban::SharedPtr<CharacterSkin> _v;
            if(!CharacterSkin::deserializeCharacterSkin(_buf, _v)) return false;
            _dataList.push_back(_v);
            _dataMap[_v->id] = _v;
        }
        return true;
    }

    const ::luban::HashMap<::luban::int32, ::luban::SharedPtr<CharacterSkin>>& getDataMap() const { return _dataMap; }
    const ::luban::Vector<::luban::SharedPtr<CharacterSkin>>& getDataList() const { return _dataList; }

    CharacterSkin* getRaw(::luban::int32 key)
    { 
        auto it = _dataMap.find(key);
        return it != _dataMap.end() ? it->second.get() : nullptr;
    }

    ::luban::SharedPtr<CharacterSkin> get(::luban::int32 key)
    { 
        auto it = _dataMap.find(key);
        return it != _dataMap.end() ? it->second : nullptr;
    }

};

}

namespace Global {


class TbRare
{
    private:
    ::luban::HashMap<::luban::int32, ::luban::SharedPtr<Rare>> _dataMap;
    ::luban::Vector<::luban::SharedPtr<Rare>> _dataList;
    
    public:
    bool load(::luban::ByteBuf& _buf)
    {        
        int n;
        if (!_buf.readSize(n)) return false;
        for(; n > 0 ; --n)
        {
            ::luban::SharedPtr<Rare> _v;
            if(!Rare::deserializeRare(_buf, _v)) return false;
            _dataList.push_back(_v);
            _dataMap[_v->id] = _v;
        }
        return true;
    }

    const ::luban::HashMap<::luban::int32, ::luban::SharedPtr<Rare>>& getDataMap() const { return _dataMap; }
    const ::luban::Vector<::luban::SharedPtr<Rare>>& getDataList() const { return _dataList; }

    Rare* getRaw(::luban::int32 key)
    { 
        auto it = _dataMap.find(key);
        return it != _dataMap.end() ? it->second.get() : nullptr;
    }

    ::luban::SharedPtr<Rare> get(::luban::int32 key)
    { 
        auto it = _dataMap.find(key);
        return it != _dataMap.end() ? it->second : nullptr;
    }

};

}

namespace Global {


class TbTranslate
{
    private:
    ::luban::HashMap<::luban::String, ::luban::SharedPtr<Translate>> _dataMap;
    ::luban::Vector<::luban::SharedPtr<Translate>> _dataList;
    
    public:
    bool load(::luban::ByteBuf& _buf)
    {        
        int n;
        if (!_buf.readSize(n)) return false;
        for(; n > 0 ; --n)
        {
            ::luban::SharedPtr<Translate> _v;
            if(!Translate::deserializeTranslate(_buf, _v)) return false;
            _dataList.push_back(_v);
            _dataMap[_v->key] = _v;
        }
        return true;
    }

    const ::luban::HashMap<::luban::String, ::luban::SharedPtr<Translate>>& getDataMap() const { return _dataMap; }
    const ::luban::Vector<::luban::SharedPtr<Translate>>& getDataList() const { return _dataList; }

    Translate* getRaw(::luban::String key)
    { 
        auto it = _dataMap.find(key);
        return it != _dataMap.end() ? it->second.get() : nullptr;
    }

    ::luban::SharedPtr<Translate> get(::luban::String key)
    { 
        auto it = _dataMap.find(key);
        return it != _dataMap.end() ? it->second : nullptr;
    }

};

}

namespace Global {


class TbAdventure
{
    private:
    ::luban::HashMap<::luban::int32, ::luban::SharedPtr<Advenrture>> _dataMap;
    ::luban::Vector<::luban::SharedPtr<Advenrture>> _dataList;
    
    public:
    bool load(::luban::ByteBuf& _buf)
    {        
        int n;
        if (!_buf.readSize(n)) return false;
        for(; n > 0 ; --n)
        {
            ::luban::SharedPtr<Advenrture> _v;
            if(!Advenrture::deserializeAdvenrture(_buf, _v)) return false;
            _dataList.push_back(_v);
            _dataMap[_v->id] = _v;
        }
        return true;
    }

    const ::luban::HashMap<::luban::int32, ::luban::SharedPtr<Advenrture>>& getDataMap() const { return _dataMap; }
    const ::luban::Vector<::luban::SharedPtr<Advenrture>>& getDataList() const { return _dataList; }

    Advenrture* getRaw(::luban::int32 key)
    { 
        auto it = _dataMap.find(key);
        return it != _dataMap.end() ? it->second.get() : nullptr;
    }

    ::luban::SharedPtr<Advenrture> get(::luban::int32 key)
    { 
        auto it = _dataMap.find(key);
        return it != _dataMap.end() ? it->second : nullptr;
    }

};

}

namespace Global {


class TbIncome
{
    private:
    ::luban::HashMap<::luban::int32, ::luban::SharedPtr<Income>> _dataMap;
    ::luban::Vector<::luban::SharedPtr<Income>> _dataList;
    
    public:
    bool load(::luban::ByteBuf& _buf)
    {        
        int n;
        if (!_buf.readSize(n)) return false;
        for(; n > 0 ; --n)
        {
            ::luban::SharedPtr<Income> _v;
            if(!Income::deserializeIncome(_buf, _v)) return false;
            _dataList.push_back(_v);
            _dataMap[_v->id] = _v;
        }
        return true;
    }

    const ::luban::HashMap<::luban::int32, ::luban::SharedPtr<Income>>& getDataMap() const { return _dataMap; }
    const ::luban::Vector<::luban::SharedPtr<Income>>& getDataList() const { return _dataList; }

    Income* getRaw(::luban::int32 key)
    { 
        auto it = _dataMap.find(key);
        return it != _dataMap.end() ? it->second.get() : nullptr;
    }

    ::luban::SharedPtr<Income> get(::luban::int32 key)
    { 
        auto it = _dataMap.find(key);
        return it != _dataMap.end() ? it->second : nullptr;
    }

};

}

namespace Global {


class TbSettings
{
     private:
    ::luban::SharedPtr<Setting> _data;

    public:
    ::luban::SharedPtr<Setting> data() const { return _data; }

    bool load(::luban::ByteBuf& _buf)
    {
        int n;
        if (!_buf.readSize(n)) return false;
        if (n != 1) return false;
        if(!Setting::deserializeSetting(_buf, _data)) return false;
        return true;
    }


    /**
     * 待机动画播放间隔，单位秒
     */
    ::luban::HashMap<EPlayInterval, ::luban::int32>& getIdelPlayInterval() const { return _data->IdelPlayInterval; }
    /**
     * 对话显示时长，单位秒
     */
    ::luban::float32& getDialogueShowTime() const { return _data->DialogueShowTime; }
};

}

namespace Item {


class TbRecord
{
    private:
    ::luban::HashMap<::luban::int32, ::luban::SharedPtr<Record>> _dataMap;
    ::luban::Vector<::luban::SharedPtr<Record>> _dataList;
    
    public:
    bool load(::luban::ByteBuf& _buf)
    {        
        int n;
        if (!_buf.readSize(n)) return false;
        for(; n > 0 ; --n)
        {
            ::luban::SharedPtr<Record> _v;
            if(!Record::deserializeRecord(_buf, _v)) return false;
            _dataList.push_back(_v);
            _dataMap[_v->id] = _v;
        }
        return true;
    }

    const ::luban::HashMap<::luban::int32, ::luban::SharedPtr<Record>>& getDataMap() const { return _dataMap; }
    const ::luban::Vector<::luban::SharedPtr<Record>>& getDataList() const { return _dataList; }

    Record* getRaw(::luban::int32 key)
    { 
        auto it = _dataMap.find(key);
        return it != _dataMap.end() ? it->second.get() : nullptr;
    }

    ::luban::SharedPtr<Record> get(::luban::int32 key)
    { 
        auto it = _dataMap.find(key);
        return it != _dataMap.end() ? it->second : nullptr;
    }

};

}

namespace Item {


class TbDecoration
{
    private:
    ::luban::HashMap<::luban::int32, ::luban::SharedPtr<Discoration>> _dataMap;
    ::luban::Vector<::luban::SharedPtr<Discoration>> _dataList;
    
    public:
    bool load(::luban::ByteBuf& _buf)
    {        
        int n;
        if (!_buf.readSize(n)) return false;
        for(; n > 0 ; --n)
        {
            ::luban::SharedPtr<Discoration> _v;
            if(!Discoration::deserializeDiscoration(_buf, _v)) return false;
            _dataList.push_back(_v);
            _dataMap[_v->id] = _v;
        }
        return true;
    }

    const ::luban::HashMap<::luban::int32, ::luban::SharedPtr<Discoration>>& getDataMap() const { return _dataMap; }
    const ::luban::Vector<::luban::SharedPtr<Discoration>>& getDataList() const { return _dataList; }

    Discoration* getRaw(::luban::int32 key)
    { 
        auto it = _dataMap.find(key);
        return it != _dataMap.end() ? it->second.get() : nullptr;
    }

    ::luban::SharedPtr<Discoration> get(::luban::int32 key)
    { 
        auto it = _dataMap.find(key);
        return it != _dataMap.end() ? it->second : nullptr;
    }

};

}

namespace Item {


class TbTimer
{
    private:
    ::luban::HashMap<::luban::int32, ::luban::SharedPtr<Timer>> _dataMap;
    ::luban::Vector<::luban::SharedPtr<Timer>> _dataList;
    
    public:
    bool load(::luban::ByteBuf& _buf)
    {        
        int n;
        if (!_buf.readSize(n)) return false;
        for(; n > 0 ; --n)
        {
            ::luban::SharedPtr<Timer> _v;
            if(!Timer::deserializeTimer(_buf, _v)) return false;
            _dataList.push_back(_v);
            _dataMap[_v->id] = _v;
        }
        return true;
    }

    const ::luban::HashMap<::luban::int32, ::luban::SharedPtr<Timer>>& getDataMap() const { return _dataMap; }
    const ::luban::Vector<::luban::SharedPtr<Timer>>& getDataList() const { return _dataList; }

    Timer* getRaw(::luban::int32 key)
    { 
        auto it = _dataMap.find(key);
        return it != _dataMap.end() ? it->second.get() : nullptr;
    }

    ::luban::SharedPtr<Timer> get(::luban::int32 key)
    { 
        auto it = _dataMap.find(key);
        return it != _dataMap.end() ? it->second : nullptr;
    }

};

}

class Tables
{
    public:
     Character::TbCharacterData TbCharacterData;
     Character::TbCharacterAnim TbCharacterAnim;
     Character::TbCharacterSet TbCharacterSet;
     Character::TbCharacterUI TbCharacterUI;
     Character::TbCharacterSkin TbCharacterSkin;
     Global::TbRare TbRare;
     Global::TbTranslate TbTranslate;
     Global::TbAdventure TbAdventure;
     Global::TbIncome TbIncome;
     Global::TbSettings TbSettings;
     Item::TbRecord TbRecord;
     Item::TbDecoration TbDecoration;
     Item::TbTimer TbTimer;

    bool load(::luban::Loader<::luban::ByteBuf> loader)
    {
        ::luban::ByteBuf buf;
        buf.clear();
        if (!loader(buf, "character_tbcharacterdata")) return false;
        if (!TbCharacterData.load(buf)) return false;
        buf.clear();
        if (!loader(buf, "character_tbcharacteranim")) return false;
        if (!TbCharacterAnim.load(buf)) return false;
        buf.clear();
        if (!loader(buf, "character_tbcharacterset")) return false;
        if (!TbCharacterSet.load(buf)) return false;
        buf.clear();
        if (!loader(buf, "character_tbcharacterui")) return false;
        if (!TbCharacterUI.load(buf)) return false;
        buf.clear();
        if (!loader(buf, "character_tbcharacterskin")) return false;
        if (!TbCharacterSkin.load(buf)) return false;
        buf.clear();
        if (!loader(buf, "global_tbrare")) return false;
        if (!TbRare.load(buf)) return false;
        buf.clear();
        if (!loader(buf, "global_tbtranslate")) return false;
        if (!TbTranslate.load(buf)) return false;
        buf.clear();
        if (!loader(buf, "global_tbadventure")) return false;
        if (!TbAdventure.load(buf)) return false;
        buf.clear();
        if (!loader(buf, "global_tbincome")) return false;
        if (!TbIncome.load(buf)) return false;
        buf.clear();
        if (!loader(buf, "global_tbsettings")) return false;
        if (!TbSettings.load(buf)) return false;
        buf.clear();
        if (!loader(buf, "item_tbrecord")) return false;
        if (!TbRecord.load(buf)) return false;
        buf.clear();
        if (!loader(buf, "item_tbdecoration")) return false;
        if (!TbDecoration.load(buf)) return false;
        buf.clear();
        if (!loader(buf, "item_tbtimer")) return false;
        if (!TbTimer.load(buf)) return false;
        return true;
    }
};



}