
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDedede::status::SpecialHiJump_exec(L2CFighterDedede *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  Hash40 HVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  undefined8 local_40;
  ulong uStack56;
  
  lib::L2CValue::L2CValue(aLStack80,0);
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_DEDEDE_STATUS_SUPER_JUMP_WORK_FLAG_RESET_GRIVITY_KINE)
  ;
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_40);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_40,1);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_DEDEDE_STATUS_SUPER_JUMP_WORK_INT_JUMP_COUNT);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_40);
    iVar4 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__add_int_impl(this->moduleAccessor,iVar3,iVar4);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue((L2CValue *)&local_40);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_DEDEDE_STATUS_SUPER_JUMP_WORK_INT_JUMP_COUNT);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_40,iVar3);
    lib::L2CValue::L2CValue(aLStack144,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack160,0x1be8351ab2);
    uVar5 = lib::L2CValue::as_integer(aLStack144);
    uVar6 = lib::L2CValue::as_integer(aLStack160);
    fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar6)
    ;
    lib::L2CValue::L2CValue(aLStack128,fVar8);
    uVar5 = lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_40);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue((L2CValue *)&local_40);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack112,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      fVar8 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)&local_40,fVar8);
      lib::L2CValue::operator_(aLStack96,(L2CValue *)&local_40);
      lib::L2CValue::_L2CValue((L2CValue *)&local_40);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      fVar8 = (float)app::lua_bind::KineticModule__get_sum_speed_y_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)&local_40,fVar8);
      lib::L2CValue::operator_(aLStack80,(L2CValue *)&local_40);
      lib::L2CValue::_L2CValue((L2CValue *)&local_40);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue((L2CValue *)&local_40,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      lib::L2CValue::L2CValue(aLStack112,_ENERGY_GRAVITY_RESET_TYPE_GRAVITY);
      lib::L2CValue::L2CValue(aLStack128,0.0);
      lib::L2CValue::L2CValue(aLStack144,0.0);
      lib::L2CValue::L2CValue(aLStack160,0.0);
      lib::L2CValue::L2CValue(aLStack176,0.0);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_40);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
      app::sv_kinetic_energy::reset_energy(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue((L2CValue *)&local_40);
      lib::L2CValue::L2CValue((L2CValue *)&local_40,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_40);
      app::lua_bind::KineticModule__enable_energy_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue((L2CValue *)&local_40);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_40,
                 _FIGHTER_DEDEDE_STATUS_SUPER_JUMP_WORK_FLAG_RESET_GRIVITY_KINE);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_40);
      app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue((L2CValue *)&local_40);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_40,
                 _FIGHTER_DEDEDE_STATUS_SUPER_JUMP_WORK_FLAG_TURN_KINETIC_RESET);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_40);
      app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue((L2CValue *)&local_40);
    }
  }
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_DEDEDE_STATUS_SUPER_JUMP_WORK_FLOAT_PRE_LR);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  fVar8 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack112,fVar8);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,-1.0);
  uVar5 = lib::L2CValue::operator__(aLStack112,(L2CValue *)&local_40);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_DEDEDE_INSTANCE_WORK_ID_FLAG_SPECIAL_HI_TURN_DAMAGE)
    ;
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue((L2CValue *)&local_40,true);
    uVar5 = lib::L2CValue::operator__(aLStack112,(L2CValue *)&local_40);
    lib::L2CValue::_L2CValue((L2CValue *)&local_40);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar5 & 1) == 0) {
      fVar8 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack112,fVar8);
      lib::L2CValue::L2CValue((L2CValue *)&local_40,-1.0);
      uVar5 = lib::L2CValue::operator__(aLStack112,(L2CValue *)&local_40);
      lib::L2CValue::_L2CValue((L2CValue *)&local_40);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar5 & 1) == 0) goto LAB_7100007b68;
      lib::L2CValue::L2CValue(aLStack112,0x570211ebd);
      lib::L2CValue::L2CValue(aLStack128,0.0);
      lib::L2CValue::L2CValue(aLStack144,180.0);
      lib::L2CValue::L2CValue(aLStack160,0.0);
      HVar7 = lib::L2CValue::as_hash(aLStack112);
      uVar9 = lib::L2CValue::as_number(aLStack128);
      uVar10 = lib::L2CValue::as_number(aLStack144);
      uVar11 = lib::L2CValue::as_number(aLStack160);
      local_40 = CONCAT44(uVar10,uVar9);
      uStack56 = (ulong)uVar11;
      app::lua_bind::ModelModule__set_joint_rotate_impl
                (this->moduleAccessor,HVar7,(Vector3f *)&local_40,0,0);
    }
    else {
      fVar8 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack112,fVar8);
      lib::L2CValue::L2CValue((L2CValue *)&local_40,1.0);
      uVar5 = lib::L2CValue::operator__(aLStack112,(L2CValue *)&local_40);
      lib::L2CValue::_L2CValue((L2CValue *)&local_40);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar5 & 1) == 0) goto LAB_7100007b68;
      lib::L2CValue::L2CValue(aLStack112,0x570211ebd);
      lib::L2CValue::L2CValue(aLStack128,0.0);
      lib::L2CValue::L2CValue(aLStack144,180.0);
      lib::L2CValue::L2CValue(aLStack160,0.0);
      HVar7 = lib::L2CValue::as_hash(aLStack112);
      uVar9 = lib::L2CValue::as_number(aLStack128);
      uVar10 = lib::L2CValue::as_number(aLStack144);
      uVar11 = lib::L2CValue::as_number(aLStack160);
      local_40 = CONCAT44(uVar10,uVar9);
      uStack56 = (ulong)uVar11;
      app::lua_bind::ModelModule__set_joint_rotate_impl
                (this->moduleAccessor,HVar7,(Vector3f *)&local_40,0,0);
    }
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
  }
LAB_7100007b68:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

