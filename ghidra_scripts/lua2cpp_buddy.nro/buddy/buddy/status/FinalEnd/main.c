
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterBuddy::status::FinalEnd_main(L2CFighterBuddy *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  GroundCorrectKind GVar3;
  ulong uVar4;
  Hash40 HVar5;
  float fVar6;
  float fVar7;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,false);
  bVar1 = lib::L2CValue::as_bool(aLStack80);
  app::lua_bind::AreaModule__set_whole_impl(this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,true);
  bVar1 = lib::L2CValue::as_bool(aLStack80);
  app::lua_bind::VisibilityModule__set_whole_impl(this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,FIGHTER_INSTANCE_WORK_ID_FLAG_NO_DEAD);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  app::lua_bind::FighterManager__exit_finalbg_impl(LUA_SCRIPT_LINE_STATUS_SYSTEM);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BUDDY_STATUS_FINAL_WORK_INT_START_SITUATION);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack96,iVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
  uVar4 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,_GROUND_CORRECT_KIND_AIR_PASSABLE_OFF);
    GVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar3);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,0xdf3b40b09);
    lib::L2CValue::L2CValue(aLStack112,0.0);
    lib::L2CValue::L2CValue(aLStack128,1.0);
    lib::L2CValue::L2CValue(aLStack144,false);
    HVar5 = lib::L2CValue::as_hash(aLStack80);
    fVar6 = (float)lib::L2CValue::as_number(aLStack112);
    fVar7 = (float)lib::L2CValue::as_number(aLStack128);
    bVar1 = lib::L2CValue::as_bool(aLStack144);
    app::lua_bind::MotionModule__change_motion_impl
              (this->moduleAccessor,HVar5,fVar6,fVar7,(bool)(bVar1 & 1),0.0,false,false);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,_GROUND_CORRECT_KIND_NONE);
    GVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar3);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,0x92ee4d34c);
    lib::L2CValue::L2CValue(aLStack112,0.0);
    lib::L2CValue::L2CValue(aLStack128,1.0);
    lib::L2CValue::L2CValue(aLStack144,false);
    HVar5 = lib::L2CValue::as_hash(aLStack80);
    fVar6 = (float)lib::L2CValue::as_number(aLStack112);
    fVar7 = (float)lib::L2CValue::as_number(aLStack128);
    bVar1 = lib::L2CValue::as_bool(aLStack144);
    app::lua_bind::MotionModule__change_motion_impl
              (this->moduleAccessor,HVar5,fVar6,fVar7,(bool)(bVar1 & 1),0.0,false,false);
  }
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,FinalEnd_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

