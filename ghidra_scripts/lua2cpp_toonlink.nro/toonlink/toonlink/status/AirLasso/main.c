
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterToonlink::status::AirLasso_main(L2CFighterToonlink *this,L2CValue *return_value)

{
  L2CValue *pLVar1;
  ulong uVar2;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack112);
  pLVar1 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,2);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIND_TOONLINK);
  uVar2 = lib::L2CValue::operator__(pLVar1,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar2 & 1) == 0) {
    pLVar1 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,2);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIND_YOUNGLINK);
    uVar2 = lib::L2CValue::operator__(pLVar1,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar2 & 1) == 0) goto LAB_710000e0b8;
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_YOUNGLINK_GENERATE_ARTICLE_HOOKSHOT);
    lib::L2CValue::operator_(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_YOUNGLINK_GENERATE_ARTICLE_HOOKSHOT_HAND);
    lib::L2CValue::operator_(aLStack112,aLStack80);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_TOONLINK_GENERATE_ARTICLE_HOOKSHOT);
    lib::L2CValue::operator_(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_TOONLINK_GENERATE_ARTICLE_HOOKSHOT_HAND);
    lib::L2CValue::operator_(aLStack112,aLStack80);
  }
  lib::L2CValue::_L2CValue(aLStack80);
LAB_710000e0b8:
  lib::L2CValue::L2CValue(aLStack128,aLStack96);
  lib::L2CValue::L2CValue(aLStack144,aLStack112);
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_LINK_CLIFF_HANG_DATA_AIR_LASSO);
  lib::L2CValue::L2CValue(aLStack176,true);
  lua2cpp::L2CFighterCommon::status_AirLasso
            (this,(L2CValue)0x80,(L2CValue)0x70,(L2CValue)0x60,(L2CValue)0x50);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

