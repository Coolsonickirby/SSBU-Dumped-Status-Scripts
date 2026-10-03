
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001c660(L2CFighterCommon *param_1)

{
  L2CValue *this;
  L2CValue *pLVar1;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  this = &param_1->globalTable;
  pLVar1 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,9);
  lib::L2CValue::L2CValue(aLStack64,pLVar1);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MASTER_GENERATE_ARTICLE_BOW);
  lua2cpp::L2CFighterCommon::sub_remove_exist_article_at_status_end
            (param_1,(L2CValue)0xc0,(L2CValue)0xb0);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack64);
  pLVar1 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,9);
  lib::L2CValue::L2CValue(aLStack96,pLVar1);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MASTER_GENERATE_ARTICLE_SPEAR);
  lua2cpp::L2CFighterCommon::sub_remove_exist_article_at_status_end
            (param_1,(L2CValue)0xa0,(L2CValue)0x90);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  pLVar1 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,9);
  lib::L2CValue::L2CValue(aLStack128,pLVar1);
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_MASTER_GENERATE_ARTICLE_SWORD);
  lua2cpp::L2CFighterCommon::sub_remove_exist_article_at_status_end
            (param_1,(L2CValue)0x80,(L2CValue)0x70);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  pLVar1 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,9);
  lib::L2CValue::L2CValue(aLStack160,pLVar1);
  lib::L2CValue::L2CValue(aLStack176,_FIGHTER_MASTER_GENERATE_ARTICLE_AXE);
  lua2cpp::L2CFighterCommon::sub_remove_exist_article_at_status_end
            (param_1,(L2CValue)0x60,(L2CValue)0x50);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  return;
}

