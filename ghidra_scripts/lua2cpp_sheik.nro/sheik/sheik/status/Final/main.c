
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterSheik::status::Final_main(L2CFighterSheik *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  HitStatus HVar3;
  GroundCorrectKind GVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  L2CValue *this_00;
  ulong uVar8;
  Hash40 HVar9;
  float fVar10;
  float fVar11;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  
  lib::L2CValue::L2CValue(aLStack112,0x201bc9217c);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
  app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
  lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,FIGHTER_KINETIC_TYPE_RESET);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,_HIT_STATUS_XLU);
  HVar3 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::HitModule__set_whole_impl(this->moduleAccessor,HVar3,0);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,false);
  bVar1 = lib::L2CValue::as_bool(aLStack112);
  app::lua_bind::AreaModule__set_whole_impl(this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack112);
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
  uVar8 = lib::L2CValue::operator__(this_00,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar8 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack112,GROUND_CORRECT_KIND_AIR);
    GVar4 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar4);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,0xf9b673ae9);
    lib::L2CValue::L2CValue(aLStack144,0.0);
    lib::L2CValue::L2CValue(aLStack160,1.0);
    lib::L2CValue::L2CValue(aLStack176,false);
    HVar9 = lib::L2CValue::as_hash(aLStack112);
    fVar10 = (float)lib::L2CValue::as_number(aLStack144);
    fVar11 = (float)lib::L2CValue::as_number(aLStack160);
    bVar1 = lib::L2CValue::as_bool(aLStack176);
    app::lua_bind::MotionModule__change_motion_impl
              (this->moduleAccessor,HVar9,fVar10,fVar11,(bool)(bVar1 & 1),0.0,false,false);
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,GROUND_CORRECT_KIND_GROUND);
    GVar4 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar4);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,0xb9e61061f);
    lib::L2CValue::L2CValue(aLStack144,0.0);
    lib::L2CValue::L2CValue(aLStack160,1.0);
    lib::L2CValue::L2CValue(aLStack176,false);
    HVar9 = lib::L2CValue::as_hash(aLStack112);
    fVar10 = (float)lib::L2CValue::as_number(aLStack144);
    fVar11 = (float)lib::L2CValue::as_number(aLStack160);
    bVar1 = lib::L2CValue::as_bool(aLStack176);
    app::lua_bind::MotionModule__change_motion_impl
              (this->moduleAccessor,HVar9,fVar10,fVar11,(bool)(bVar1 & 1),0.0,false,false);
  }
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_SHEIK_INSTANCE_WORK_ID_FLAG_FINAL_HIT);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_SHEIK_INSTANCE_WORK_ID_INT_FINAL_HIT_NUM);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  iVar5 = lib::L2CValue::as_integer(aLStack144);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar5);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue
            (aLStack144,
             _FIGHTER_SHEIK_INSTANCE_WORK_ID_INT_FINAL_TARGET_OBJECT_ID_LAST -
             _FIGHTER_SHEIK_INSTANCE_WORK_ID_INT_FINAL_TARGET_OBJECT_ID_0);
  lib::L2CValue::L2CValue(aLStack112,1);
  lib::L2CValue::operator_(aLStack144,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  iVar2 = lib::L2CValue::as_integer(aLStack160);
  lib::L2CValue::_L2CValue(aLStack160);
  if (-1 < iVar2) {
    iVar5 = -1;
    do {
      lib::L2CValue::L2CValue(aLStack112,0x50000000);
      lib::L2CValue::L2CValue
                (aLStack160,iVar5 + _FIGHTER_SHEIK_INSTANCE_WORK_ID_INT_FINAL_TARGET_OBJECT_ID_0 + 1
                );
      iVar6 = lib::L2CValue::as_integer(aLStack112);
      iVar7 = lib::L2CValue::as_integer(aLStack160);
      app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar6,iVar7);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack112);
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar2);
  }
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_SHEIK_STATUS_FINAL_WORK_INT_DASH_COUNT);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  iVar5 = lib::L2CValue::as_integer(aLStack160);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar5);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,Final_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x90);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack144);
  return;
}

