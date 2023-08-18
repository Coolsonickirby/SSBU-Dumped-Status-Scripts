
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterTrail::status::AttackAirF_main_loop(L2CFighterTrail *this,L2CValue *return_value)

{
  long lVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  L2CValue *this_00;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lua2cpp::L2CFighterCommon::status_AttackAir_Main_common(this);
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((bVar2 & 1U) != 0) goto LAB_71000135c0;
  bVar3 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar3 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((bVar2 & 1U) == 0) {
    iVar4 = app::lua_bind::ComboModule__count_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack80,iVar4);
    lib::L2CValue::L2CValue(aLStack112,0xdf05c072b);
    lib::L2CValue::L2CValue(aLStack128,0x16e300a2b8);
    uVar5 = lib::L2CValue::as_integer(aLStack112);
    uVar6 = lib::L2CValue::as_integer(aLStack128);
    iVar4 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar5,uVar6);
    lib::L2CValue::L2CValue(aLStack96,iVar4);
    uVar5 = lib::L2CValue::operator_(aLStack80,aLStack96);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      lVar1 = -0x40;
    }
    else {
      lib::L2CValue::L2CValue(aLStack160,_FIGHTER_TRAIL_STATUS_ATTACK_AIR_F_FLAG_CONNECT_COMBO);
      iVar4 = lib::L2CValue::as_integer(aLStack160);
      bVar3 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
      lib::L2CValue::L2CValue(aLStack144,(bool)(bVar3 & 1));
      lib::L2CValue::L2CValue(aLStack64,true);
      uVar5 = lib::L2CValue::operator__(aLStack144,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      if ((uVar5 & 1) == 0) {
        uVar5 = 0;
      }
      else {
        lib::L2CValue::L2CValue(aLStack192,_FIGHTER_TRAIL_STATUS_ATTACK_AIR_F_FLAG_ENABLE_COMBO);
        iVar4 = lib::L2CValue::as_integer(aLStack192);
        bVar3 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
        lib::L2CValue::L2CValue(aLStack176,(bool)(bVar3 & 1));
        lib::L2CValue::L2CValue(aLStack64,true);
        uVar5 = lib::L2CValue::operator__(aLStack176,aLStack64);
        uVar5 = uVar5 & 0xffffffff;
        lib::L2CValue::_L2CValue(aLStack64);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack192);
      }
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar5 & 1) == 0) goto LAB_7100013584;
      lib::L2CValue::L2CValue(aLStack64,true);
      FUN_71000131a0(this,aLStack64);
      lVar1 = -0x30;
    }
    lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar1));
  }
LAB_7100013584:
  lua2cpp::L2CFighterCommon::sub_air_check_superleaf_fall_slowly(this);
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,8);
  lib::L2CValue::operator_(this_00);
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar2 & 1U) != 0) {
    lua2cpp::L2CFighterCommon::sub_attack_air_inherit_jump_aerial_motion_uniq_process_exec_fix_pos
              (this);
  }
LAB_71000135c0:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

