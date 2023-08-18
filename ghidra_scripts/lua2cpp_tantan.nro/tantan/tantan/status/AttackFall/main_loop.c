
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterTantan::status::AttackFall_main_loop(L2CFighterTantan *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  Hash40 HVar5;
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
  
  FUN_71000442a0(aLStack80,this);
  lib::L2CValue::L2CValue(aLStack64,true);
  uVar4 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar4 & 1) == 0) {
LAB_710005e8a0:
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_FALL);
    lib::L2CValue::L2CValue(aLStack112,false);
    FUN_7100044bd0(aLStack80,this,aLStack96,aLStack112);
    lib::L2CValue::L2CValue(aLStack64,true);
    uVar4 = lib::L2CValue::operator__(aLStack80,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar4 & 1) != 0) goto LAB_710005ead8;
    FUN_710004c020(this);
    lib::L2CValue::L2CValue(aLStack128,false);
    lib::L2CValue::L2CValue(aLStack144,false);
    FUN_710004c370(aLStack80,this,aLStack128,aLStack144);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    FUN_710005dd20(aLStack160,this);
    lib::L2CValue::L2CValue(aLStack64,true);
    uVar4 = lib::L2CValue::operator__(aLStack160,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack160);
    if ((uVar4 & 1) != 0) goto LAB_710005ead8;
    lib::L2CValue::L2CValue(aLStack176,_FIGHTER_INSTANCE_WORK_ID_FLAG_METAMON_EXHAUST);
    iVar3 = lib::L2CValue::as_integer(aLStack176);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack160,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue(aLStack64,true);
    uVar4 = lib::L2CValue::operator__(aLStack160,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack176);
    if ((uVar4 & 1) == 0) {
      lua2cpp::L2CFighterCommon::sub_air_check_superleaf_fall_slowly(this);
      FUN_7100022710(aLStack160,this);
      HVar5 = app::lua_bind::MotionModule__motion_kind_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack176,HVar5);
      lib::L2CValue::L2CValue(aLStack192,0x10329e2c29);
      lib::L2CValue::L2CValue(aLStack208,0x163a330f81);
      FUN_710004ebd0(aLStack64,this,aLStack160,aLStack176,aLStack192,aLStack208);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack160);
      FUN_710005e450(this);
      goto LAB_710005ead8;
    }
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_METAMON_OUT);
    lib::L2CValue::L2CValue(aLStack160,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0x60);
    lib::L2CValue::_L2CValue(aLStack160);
  }
  else {
    lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((bVar1 & 1U) == 0) goto LAB_710005e8a0;
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_FALL);
    FUN_7100044720(this,aLStack64);
  }
  lib::L2CValue::_L2CValue(aLStack64);
LAB_710005ead8:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

