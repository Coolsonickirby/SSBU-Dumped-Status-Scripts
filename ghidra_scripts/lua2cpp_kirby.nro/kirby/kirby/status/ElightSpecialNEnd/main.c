
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::ElightSpecialNEnd_main(L2CFighterKirby *this,L2CValue *return_value)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  float fVar4;
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
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
  
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ELIGHT_STATUS_SPECIAL_N_INT_HOLD_FRAME);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack96,iVar1);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack128,0xca3dc30e5);
  uVar2 = lib::L2CValue::as_integer(aLStack80);
  uVar3 = lib::L2CValue::as_integer(aLStack128);
  iVar1 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar2,uVar3);
  lib::L2CValue::L2CValue(aLStack112,iVar1);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack144,0x1501692ea8);
  uVar2 = lib::L2CValue::as_integer(aLStack80);
  uVar3 = lib::L2CValue::as_integer(aLStack144);
  fVar4 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar2,uVar3);
  lib::L2CValue::L2CValue(aLStack128,fVar4);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::operator_(aLStack96,aLStack112);
  lib::L2CValue::L2CValue(aLStack176,0.0);
  lib::L2CValue::L2CValue(aLStack192,1.0);
  lua2cpp::L2CFighterBase::clamp(this,(L2CValue)0x60,(L2CValue)0x50,(L2CValue)0x40);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack80,0.0);
  lib::L2CValue::operator_(aLStack144,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ELIGHT_STATUS_SPECIAL_N_FLOAT_ATTACK_RATIO);
  fVar4 = (float)lib::L2CValue::as_number(aLStack208);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar4,iVar1);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::L2CValue(aLStack80,1.0);
  lib::L2CValue::operator_(aLStack128,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::operator_(aLStack144,aLStack240);
  lib::L2CValue::L2CValue(aLStack80,1.0);
  lib::L2CValue::operator_(aLStack224,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack240);
  fVar4 = (float)lib::L2CValue::as_number(aLStack208);
  app::lua_bind::AttackModule__set_power_mul_status_impl(this->moduleAccessor,fVar4);
  lib::L2CValue::L2CValue(aLStack224,0x915c5de42);
  lib::L2CValue::L2CValue(aLStack240,0xd483c0ed2);
  lib::L2CValue::L2CValue(aLStack80,1.0);
  uVar2 = lib::L2CValue::operator__(aLStack80,aLStack144);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar2 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,0xa82125b6f);
    lib::L2CValue::operator_(aLStack224,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,0xe724031fb);
    lib::L2CValue::operator_(aLStack240,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue(aLStack80,false);
  lib::L2CValue::L2CValue(aLStack272,aLStack224);
  lib::L2CValue::L2CValue(aLStack288,aLStack240);
  lib::L2CValue::L2CValue(aLStack304,aLStack80);
  lua2cpp::L2CFighterCommon::sub_change_motion_by_situation_kirby_copy
            (this,(L2CValue)0xf0,(L2CValue)0xe0,(L2CValue)0xd0);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::L2CValue(aLStack336,true);
  lua2cpp::L2CFighterCommon::sub_set_ground_correct_by_situation(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::_L2CValue(aLStack336);
  lib::L2CValue::L2CValue(aLStack352,ElightSpecialNEnd_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue(aLStack352);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

