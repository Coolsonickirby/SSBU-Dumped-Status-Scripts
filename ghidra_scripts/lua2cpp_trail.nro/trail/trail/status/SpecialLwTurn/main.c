
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterTrail::status::SpecialLwTurn_main(L2CFighterTrail *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  void *pvVar6;
  BattleObjectModuleAccessor *pBVar7;
  Hash40 HVar8;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack112,0xfa4760a42);
  lib::L2CValue::L2CValue(aLStack128,0x13afef8796);
  lib::L2CValue::L2CValue(aLStack144,false);
  lua2cpp::L2CFighterCommon::sub_change_motion_by_situation
            (this,(L2CValue)0x90,(L2CValue)0x80,(L2CValue)0x70);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_TRAIL_STATUS_SPECIAL_LW_FLAG_HIT_STOP);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::KineticModule__unable_energy_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::_L2CValue(aLStack80);
  app::lua_bind::PostureModule__reverse_lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack176,_FIGHTER_TRAIL_STATUS_SPECIAL_LW_FLAG_DIRECT);
  iVar3 = lib::L2CValue::as_integer(aLStack176);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack160,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar5 = lib::L2CValue::operator__(aLStack160,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack176);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_TRAIL_STATUS_SPECIAL_LW_INT_TARGET_ID);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack160,iVar3);
    lib::L2CValue::_L2CValue(aLStack80);
    uVar4 = lib::L2CValue::as_integer(aLStack160);
    bVar1 = app::sv_battle_object::is_active(uVar4);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((bVar2 & 1U) != 0) {
      uVar4 = lib::L2CValue::as_integer(aLStack160);
      uVar4 = app::sv_battle_object::category(uVar4);
      lib::L2CValue::L2CValue(aLStack176,uVar4 & 0xff);
      lib::L2CValue::L2CValue(aLStack80,_BATTLE_OBJECT_CATEGORY_FIGHTER);
      uVar5 = lib::L2CValue::operator__(aLStack176,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack176);
      if ((uVar5 & 1) != 0) {
        uVar4 = lib::L2CValue::as_integer(aLStack160);
        pvVar6 = (void *)app::sv_battle_object::module_accessor(uVar4);
        if (pvVar6 == (void *)0x0) {
          lib::L2CValue::L2CValue(aLStack80,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
        }
        else {
          lib::L2CValue::L2CValue(aLStack80,pvVar6);
        }
        uVar4 = app::lua_bind::MotionModule__end_frame_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack176,uVar4);
        lib::L2CValue::L2CValue(aLStack192,false);
        iVar3 = lib::L2CValue::as_integer(aLStack176);
        bVar1 = lib::L2CValue::as_bool(aLStack192);
        pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack80);
        app::lua_bind::StopModule__set_hit_stop_frame_impl(pBVar7,iVar3,(bool)(bVar1 & 1));
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack80);
      }
    }
    lib::L2CValue::_L2CValue(aLStack160);
  }
  lib::L2CValue::L2CValue(aLStack176,_FIGHTER_TRAIL_STATUS_SPECIAL_LW_FLAG_DIRECT);
  iVar3 = lib::L2CValue::as_integer(aLStack176);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack160,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar5 = lib::L2CValue::operator__(aLStack160,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack176);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack160,0x1ed8ef3c34);
    HVar8 = lib::L2CValue::as_hash(aLStack160);
    iVar3 = app::lua_bind::SoundModule__play_se_impl
                      (this->moduleAccessor,HVar8,true,false,false,false,0);
    lib::L2CValue::L2CValue(aLStack80,iVar3);
  }
  else {
    lib::L2CValue::L2CValue(aLStack160,0x1e41e66d8e);
    HVar8 = lib::L2CValue::as_hash(aLStack160);
    iVar3 = app::lua_bind::SoundModule__play_se_impl
                      (this->moduleAccessor,HVar8,true,false,false,false,0);
    lib::L2CValue::L2CValue(aLStack80,iVar3);
  }
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack160,SpecialLwTurn_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x60);
  lib::L2CValue::_L2CValue(aLStack160);
  return;
}

