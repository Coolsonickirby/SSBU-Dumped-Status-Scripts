
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterTantan::status::AttackJumpAerial_main_loop(L2CFighterTantan *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  ulong uVar3;
  Hash40 HVar4;
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
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
  
  FUN_71000442a0(aLStack96,this);
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar3 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar3 & 1) == 0) {
LAB_710005ed24:
    lib::L2CValue::L2CValue(aLStack112,FIGHTER_STATUS_KIND_JUMP_AERIAL);
    lib::L2CValue::L2CValue(aLStack128,false);
    FUN_7100044bd0(aLStack96,this,aLStack112,aLStack128);
    lib::L2CValue::L2CValue(aLStack80,true);
    uVar3 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar3 & 1) != 0) goto LAB_710005ee88;
    FUN_710004c020(this);
    lib::L2CValue::L2CValue(aLStack144,false);
    lib::L2CValue::L2CValue(aLStack160,false);
    FUN_710004c370(aLStack96,this,aLStack144,aLStack160);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    FUN_710005dd20(aLStack176,this);
    lib::L2CValue::L2CValue(aLStack80,true);
    uVar3 = lib::L2CValue::operator__(aLStack176,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack176);
    if ((uVar3 & 1) != 0) goto LAB_710005ee88;
    bVar2 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((bVar1 & 1U) == 0) {
      lua2cpp::L2CFighterCommon::sub_air_check_superleaf_fall_slowly(this);
      FUN_7100022710(aLStack176,this);
      HVar4 = app::lua_bind::MotionModule__motion_kind_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack192,HVar4);
      lib::L2CValue::L2CValue(aLStack224,aLStack176);
      lib::L2CValue::L2CValue(aLStack240,aLStack192);
      lib::L2CValue::L2CValue(aLStack256,0x191f5b3aad);
      lib::L2CValue::L2CValue(aLStack272,0x1ffdf14f2f);
      FUN_710004ebd0(aLStack208,this,aLStack224,aLStack240,aLStack256,aLStack272);
      lib::L2CValue::L2CValue(aLStack80,true);
      uVar3 = lib::L2CValue::operator__(aLStack208,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack224);
      if ((uVar3 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack208,aLStack176);
        lib::L2CValue::L2CValue(aLStack288,aLStack192);
        lib::L2CValue::L2CValue(aLStack304,0x191836feb4);
        lib::L2CValue::L2CValue(aLStack320,0x1ffa9c8b36);
        FUN_710004ebd0(aLStack80,this,aLStack208,aLStack288,aLStack304,aLStack320);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack320);
        lib::L2CValue::_L2CValue(aLStack304);
        lib::L2CValue::_L2CValue(aLStack288);
        lib::L2CValue::_L2CValue(aLStack208);
      }
      FUN_710005e450(this);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack176);
      return;
    }
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_TANTAN_STATUS_KIND_ATTACK_FALL_AERIAL);
    lib::L2CValue::L2CValue(aLStack176,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x50);
    lib::L2CValue::_L2CValue(aLStack176);
  }
  else {
    lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((bVar1 & 1U) == 0) goto LAB_710005ed24;
    lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_JUMP_AERIAL);
    FUN_7100044720(this,aLStack80);
  }
  lib::L2CValue::_L2CValue(aLStack80);
LAB_710005ee88:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

