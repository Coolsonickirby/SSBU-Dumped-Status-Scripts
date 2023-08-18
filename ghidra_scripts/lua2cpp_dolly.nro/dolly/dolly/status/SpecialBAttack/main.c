
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDolly::status::SpecialBAttack_main(L2CFighterDolly *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  Hash40 HVar4;
  float *pfVar5;
  L2CValue *this_00;
  ulong uVar6;
  float fVar7;
  float fVar8;
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_DOLLY_STATUS_SPECIAL_COMMON_WORK_INT_STRENGTH);
  iVar2 = lib::L2CValue::as_integer(aLStack128);
  iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack112,iVar2);
  lib::L2CValue::L2CValue(aLStack192,_FIGHTER_DOLLY_STRENGTH_W);
  uVar3 = lib::L2CValue::operator__(aLStack112,aLStack192);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack192,0x1054ce06fe);
    lib::L2CValue::L2CValue(aLStack112,0.0);
    lib::L2CValue::L2CValue(aLStack128,1.0);
    lib::L2CValue::L2CValue(aLStack144,false);
    HVar4 = lib::L2CValue::as_hash(aLStack192);
    fVar7 = (float)lib::L2CValue::as_number(aLStack112);
    fVar8 = (float)lib::L2CValue::as_number(aLStack128);
    bVar1 = lib::L2CValue::as_bool(aLStack144);
    app::lua_bind::MotionModule__change_motion_impl
              (this->moduleAccessor,HVar4,fVar7,fVar8,(bool)(bVar1 & 1),0.0,false,false);
  }
  else {
    lib::L2CValue::L2CValue(aLStack192,0x12d1c78a33);
    lib::L2CValue::L2CValue(aLStack112,0.0);
    lib::L2CValue::L2CValue(aLStack128,1.0);
    lib::L2CValue::L2CValue(aLStack144,false);
    HVar4 = lib::L2CValue::as_hash(aLStack192);
    fVar7 = (float)lib::L2CValue::as_number(aLStack112);
    fVar8 = (float)lib::L2CValue::as_number(aLStack128);
    bVar1 = lib::L2CValue::as_bool(aLStack144);
    app::lua_bind::MotionModule__change_motion_impl
              (this->moduleAccessor,HVar4,fVar7,fVar8,(bool)(bVar1 & 1),0.0,false,false);
  }
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack192);
  pfVar5 = (float *)app::lua_bind::PostureModule__pos_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack192,*pfVar5);
  lib::L2CValue::L2CValue(aLStack176,pfVar5[1]);
  lib::L2CValue::L2CValue(aLStack160,pfVar5[2]);
  FUN_7100014320(aLStack128,this,aLStack192);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack192);
  this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x1fbdb2615);
  lib::L2CValue::L2CValue(aLStack112,0.0);
  lib::L2CValue::operator_(this_00,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_DOLLY_STATUS_SPECIAL_S_WORK_FLOAT_START_Y);
  fVar7 = (float)lib::L2CValue::as_number(aLStack144);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar7,iVar2);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack224,_FIGHTER_DOLLY_STATUS_SPECIAL_COMMON_WORK_FLAG_COMMAND);
  iVar2 = lib::L2CValue::as_integer(aLStack224);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack208,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack112,true);
  uVar3 = lib::L2CValue::operator__(aLStack208,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack224);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_LOG_ATTACK_KIND_ADDITIONS_ATTACK_03);
    lib::L2CValue::operator_(aLStack144,aLStack112);
  }
  else {
    lib::L2CValue::L2CValue(aLStack208,0xfea97fe73);
    lib::L2CValue::L2CValue(aLStack224,0x11af990ec3);
    uVar3 = lib::L2CValue::as_integer(aLStack208);
    uVar6 = lib::L2CValue::as_integer(aLStack224);
    fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar3,uVar6)
    ;
    lib::L2CValue::L2CValue(aLStack112,fVar7);
    fVar7 = (float)lib::L2CValue::as_number(aLStack112);
    app::lua_bind::AttackModule__set_power_mul_status_impl(this->moduleAccessor,fVar7);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_LOG_ATTACK_KIND_ADDITIONS_ATTACK_04);
    lib::L2CValue::operator_(aLStack144,aLStack112);
  }
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack208,0x3a40337e2c);
  lib::L2CValue::L2CValue(aLStack112,1);
  lib::L2CValue::operator_(aLStack144,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack224);
  app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
  lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::L2CValue(aLStack208,SpecialBAttack_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x30);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  return;
}

