
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDemon::status::AttackAir_init(L2CFighterDemon *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  Hash40 HVar3;
  ulong uVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
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
  
  HVar3 = app::lua_bind::MotionModule__motion_kind_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,HVar3);
  fVar6 = (float)app::lua_bind::MotionModule__frame_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack112,fVar6);
  lua2cpp::L2CFighterCommon::sub_attack_air_kind(this);
  iVar2 = app::lua_bind::ControlModule__get_attack_air_kind_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack128,iVar2);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_COMMAND_ATTACK_AIR_KIND_LW);
  uVar4 = lib::L2CValue::operator__(aLStack128,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,0xd0b71815b);
    uVar4 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,0xd0c1c4542);
      uVar4 = lib::L2CValue::operator__(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar4 & 1) == 0) goto LAB_7100035be8;
    }
    lib::L2CValue::L2CValue
              (aLStack144,_FIGHTER_DEMON_INSTANCE_WORK_ID_FLAG_ATTACK_AIR_KINETIC_AERIAL);
    iVar2 = lib::L2CValue::as_integer(aLStack144);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack80,true);
    uVar4 = lib::L2CValue::operator__(aLStack128,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,1.0);
      lib::L2CValue::L2CValue(aLStack128,false);
      HVar3 = lib::L2CValue::as_hash(aLStack96);
      fVar6 = (float)lib::L2CValue::as_number(aLStack112);
      fVar7 = (float)lib::L2CValue::as_number(aLStack80);
      bVar1 = lib::L2CValue::as_bool(aLStack128);
      app::lua_bind::MotionModule__add_motion_2nd_impl
                (this->moduleAccessor,HVar3,fVar6,fVar7,(bool)(bVar1 & 1),1.0);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,1.0);
      fVar6 = (float)lib::L2CValue::as_number(aLStack80);
      app::lua_bind::MotionModule__set_weight_impl(this->moduleAccessor,fVar6,true);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,FIGHTER_KINETIC_TYPE_JUMP_AERIAL_MOTION_2ND);
      iVar2 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar2);
    }
    else {
      lib::L2CValue::L2CValue(aLStack128,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
      iVar2 = lib::L2CValue::as_integer(aLStack128);
      fVar6 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl(this->moduleAccessor,iVar2);
      lib::L2CValue::L2CValue(aLStack80,fVar6);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_KINETIC_TYPE_JUMP_AERIAL);
      iVar2 = lib::L2CValue::as_integer(aLStack128);
      app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar2);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::L2CValue(aLStack160,0xdf05c072b);
      lib::L2CValue::L2CValue(aLStack176,0x18d22deff4);
      uVar4 = lib::L2CValue::as_integer(aLStack160);
      uVar5 = lib::L2CValue::as_integer(aLStack176);
      fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar4,uVar5);
      lib::L2CValue::L2CValue(aLStack144,fVar6);
      lib::L2CValue::L2CValue(aLStack208,0xba18057d9);
      lib::L2CValue::L2CValue(aLStack224,0);
      uVar4 = lib::L2CValue::as_integer(aLStack208);
      uVar5 = lib::L2CValue::as_integer(aLStack224);
      fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar4,uVar5);
      lib::L2CValue::L2CValue(aLStack192,fVar6);
      fVar6 = (float)lib::L2CValue::as_number(aLStack144);
      fVar7 = (float)lib::L2CValue::as_number(aLStack192);
      fVar6 = (float)app::KineticUtility::get_jump_speed_y(fVar6,fVar7);
      lib::L2CValue::L2CValue(aLStack128,fVar6);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::L2CValue(aLStack144,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
      app::sv_kinetic_energy::set_speed(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::L2CValue(aLStack176,0xdf05c072b);
      lib::L2CValue::L2CValue(aLStack192,0x16abe5ee34);
      uVar4 = lib::L2CValue::as_integer(aLStack176);
      uVar5 = lib::L2CValue::as_integer(aLStack192);
      fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar4,uVar5);
      lib::L2CValue::L2CValue(aLStack160,fVar6);
      lib::L2CValue::operator_(aLStack80,aLStack160);
      lib::L2CValue::operator_(aLStack80,aLStack144);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
      lib::L2CValue::L2CValue(aLStack160,0.0);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
      app::sv_kinetic_energy::set_speed(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
    }
    lib::L2CValue::_L2CValue(aLStack80);
  }
LAB_7100035be8:
  lua2cpp::L2CFighterCommon::sub_attack_air_uniq_process_init(this);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

