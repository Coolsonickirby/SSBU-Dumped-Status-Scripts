
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterKen::status::SpecialLw_exec(L2CFighterKen *this,L2CValue *return_value)

{
  int iVar1;
  uint uVar2;
  HitStopMulTarget HVar3;
  ulong uVar4;
  Hash40 HVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
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
  
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue(aLStack144,0);
  lib::L2CValue::L2CValue(aLStack176,_FIGHTER_RYU_STATUS_WORK_ID_SPECIAL_LW_INT_SUPER_ARMOUR_COUNT);
  iVar1 = lib::L2CValue::as_integer(aLStack176);
  iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack160,iVar1);
  lib::L2CValue::L2CValue(aLStack80,0);
  uVar4 = lib::L2CValue::operator_(aLStack80,aLStack160);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack176);
  if ((uVar4 & 1) != 0) {
    fVar7 = (float)app::lua_bind::MotionModule__frame_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack176,fVar7);
    lib::L2CValue::L2CValue(aLStack80,1.0);
    lib::L2CValue::operator_(aLStack176,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::operator_(aLStack128,aLStack160);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::L2CValue(aLStack160,0x10ef97f71f);
    HVar5 = lib::L2CValue::as_hash(aLStack160);
    uVar2 = app::lua_bind::MotionModule__end_frame_from_hash_impl(this->moduleAccessor,HVar5);
    lib::L2CValue::L2CValue(aLStack80,uVar2);
    lib::L2CValue::operator_(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::operator_(aLStack128,aLStack96);
    lib::L2CValue::operator_(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack208,0x1018dfb2f4);
    lib::L2CValue::L2CValue(aLStack224,0xd1ad026d7);
    uVar4 = lib::L2CValue::as_integer(aLStack208);
    uVar6 = lib::L2CValue::as_integer(aLStack224);
    fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar6)
    ;
    lib::L2CValue::L2CValue(aLStack192,fVar7);
    lib::L2CValue::L2CValue(aLStack256,0x1018dfb2f4);
    lib::L2CValue::L2CValue(aLStack272,0xd26dd198e);
    uVar4 = lib::L2CValue::as_integer(aLStack256);
    uVar6 = lib::L2CValue::as_integer(aLStack272);
    fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar6)
    ;
    lib::L2CValue::L2CValue(aLStack240,fVar7);
    lib::L2CValue::operator_(aLStack192,aLStack240);
    lib::L2CValue::operator_(aLStack176,aLStack112);
    lib::L2CValue::L2CValue(aLStack304,0x1018dfb2f4);
    lib::L2CValue::L2CValue(aLStack320,0xd26dd198e);
    uVar4 = lib::L2CValue::as_integer(aLStack304);
    uVar6 = lib::L2CValue::as_integer(aLStack320);
    fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar6)
    ;
    lib::L2CValue::L2CValue(aLStack288,fVar7);
    lib::L2CValue::operator_(aLStack160,aLStack288);
    lib::L2CValue::operator_(aLStack144,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack208);
    fVar7 = (float)lib::L2CValue::as_number(aLStack144);
    app::lua_bind::DamageModule__set_no_reaction_damage_power_impl(this->moduleAccessor,fVar7);
    lib::L2CValue::L2CValue(aLStack160,0x1018dfb2f4);
    lib::L2CValue::L2CValue(aLStack176,0x129874745c);
    uVar4 = lib::L2CValue::as_integer(aLStack160);
    uVar6 = lib::L2CValue::as_integer(aLStack176);
    fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar6)
    ;
    lib::L2CValue::L2CValue(aLStack80,fVar7);
    lib::L2CValue::L2CValue(aLStack192,_HIT_STOP_MUL_TARGET_ALL);
    fVar7 = (float)lib::L2CValue::as_number(aLStack80);
    HVar3 = lib::L2CValue::as_integer(aLStack192);
    fVar8 = (float)lib::L2CValue::as_number(aLStack144);
    app::lua_bind::HitModule__set_hit_stop_mul_impl(this->moduleAccessor,fVar7,HVar3,fVar8);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::L2CValue(aLStack80,0.0);
    lib::L2CValue::operator_(aLStack144,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_RYU_STATUS_WORK_ID_SPECIAL_LW_FLOAT_ENDURANCE);
    fVar7 = (float)lib::L2CValue::as_number(aLStack160);
    iVar1 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar7,iVar1);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack160);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

