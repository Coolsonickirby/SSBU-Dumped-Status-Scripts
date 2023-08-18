
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterTantan::status::AttackSquatRv_main_loop(L2CFighterTantan *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  Hash40 HVar5;
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack64,SITUATION_KIND_AIR);
  uVar4 = lib::L2CValue::operator__(pLVar3,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar4 & 1) == 0) {
    FUN_71000442a0(aLStack80,this);
    lib::L2CValue::L2CValue(aLStack64,true);
    uVar4 = lib::L2CValue::operator__(aLStack80,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,false);
      lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0xb0);
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((bVar1 & 1U) == 0) goto LAB_7100059fc0;
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_SQUAT_RV);
      FUN_7100044720(this,aLStack64);
      goto LAB_7100059f20;
    }
LAB_7100059fc0:
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_KIND_SQUAT_RV);
    lib::L2CValue::L2CValue(aLStack128,false);
    FUN_7100044bd0(aLStack96,this,aLStack112,aLStack128);
    lib::L2CValue::L2CValue(aLStack64,true);
    uVar4 = lib::L2CValue::operator__(aLStack96,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar4 & 1) != 0) goto LAB_710005a0f0;
    FUN_710005a330(aLStack96,this);
    lib::L2CValue::L2CValue(aLStack64,true);
    uVar4 = lib::L2CValue::operator__(aLStack96,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar4 & 1) != 0) goto LAB_710005a0f0;
    FUN_710004c020(this);
    lib::L2CValue::L2CValue(aLStack144,false);
    lib::L2CValue::L2CValue(aLStack160,false);
    FUN_710004c370(aLStack96,this,aLStack144,aLStack160);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    FUN_710005abc0(aLStack176,this);
    lib::L2CValue::L2CValue(aLStack64,true);
    uVar4 = lib::L2CValue::operator__(aLStack176,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack176);
    if ((uVar4 & 1) != 0) goto LAB_710005a0f0;
    bVar2 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_TANTAN_STATUS_KIND_ATTACK_WAIT);
      lib::L2CValue::L2CValue(aLStack176,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0x50);
      pLVar3 = aLStack176;
      goto LAB_7100059f1c;
    }
    FUN_7100022710(aLStack176,this);
    HVar5 = app::lua_bind::MotionModule__motion_kind_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack192,HVar5);
    lib::L2CValue::L2CValue(aLStack208,0x144222d360);
    lib::L2CValue::L2CValue(aLStack224,0x1ae58450a5);
    FUN_710004ebd0(aLStack64,this,aLStack176,aLStack192,aLStack208,aLStack224);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack192);
    pLVar3 = aLStack176;
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_TANTAN_STATUS_KIND_ATTACK_FALL);
    lib::L2CValue::L2CValue(aLStack80,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
    pLVar3 = aLStack80;
LAB_7100059f1c:
    lib::L2CValue::_L2CValue(pLVar3);
LAB_7100059f20:
    pLVar3 = aLStack64;
  }
  lib::L2CValue::_L2CValue(pLVar3);
LAB_710005a0f0:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

