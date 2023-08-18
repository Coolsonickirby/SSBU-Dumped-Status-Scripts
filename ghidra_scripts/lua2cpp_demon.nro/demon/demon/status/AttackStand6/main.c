
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDemon::status::AttackStand6_main(L2CFighterDemon *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  Hash40 HVar4;
  L2CValue *this_00;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  FUN_710002aed0(aLStack80,this);
  lib::L2CValue::L2CValue(aLStack160,true);
  uVar3 = lib::L2CValue::operator__(aLStack80,aLStack160);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack160,0xeeb0d5fcb);
    lib::L2CValue::L2CValue(aLStack80,0.0);
    lib::L2CValue::L2CValue(aLStack96,1.0);
    lib::L2CValue::L2CValue(aLStack112,false);
    HVar4 = lib::L2CValue::as_hash(aLStack160);
    fVar5 = (float)lib::L2CValue::as_number(aLStack80);
    fVar6 = (float)lib::L2CValue::as_number(aLStack96);
    bVar1 = lib::L2CValue::as_bool(aLStack112);
    app::lua_bind::MotionModule__change_motion_impl
              (this->moduleAccessor,HVar4,fVar5,fVar6,(bool)(bVar1 & 1),0.0,false,false);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::L2CValue(aLStack160,0x2b94de0d96);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_LOG_ACTION_CATEGORY_ATTACK);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_LOG_ATTACK_KIND_ADDITIONS_ATTACK_06);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
    app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::L2CValue(aLStack160,false);
    bVar1 = lib::L2CValue::as_bool(aLStack160);
    app::lua_bind::MotionModule__set_trans_move_speed_no_scale_impl
              (this->moduleAccessor,(bool)(bVar1 & 1));
    lib::L2CValue::_L2CValue(aLStack160);
    uVar7 = app::lua_bind::PostureModule__pos_2d_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack160,(float)uVar7);
    lib::L2CValue::L2CValue(aLStack144,(float)((ulong)uVar7 >> 0x20));
    lib::L2CValue::L2CValue(aLStack80,aLStack160);
    lib::L2CValue::L2CValue(aLStack96,aLStack144);
    lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0xb0,(L2CValue)0xa0);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack160);
    this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x1fbdb2615);
    lib::L2CValue::L2CValue(aLStack80,0.0);
    lib::L2CValue::operator_(this_00,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEMON_STATUS_ATTACK_STAND_6_WORK_FLOAT_START_Y);
    fVar5 = (float)lib::L2CValue::as_number(aLStack96);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar5,iVar2);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack80,AttackStand6_main_loop);
    lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xb0);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack128);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  return;
}

