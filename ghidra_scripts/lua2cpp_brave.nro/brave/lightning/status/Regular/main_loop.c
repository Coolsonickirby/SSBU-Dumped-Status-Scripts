
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponBraveLightning::status::Regular_main_loop
          (L2CWeaponBraveLightning *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  void *pvVar7;
  Hash40 HVar8;
  BattleObjectModuleAccessor *pBVar9;
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack112,_WEAPON_BRAVE_LIGHTNING_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_AIR);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue
              (aLStack144,_WEAPON_BRAVE_LIGHTNING_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_GROUND);
    iVar3 = lib::L2CValue::as_integer(aLStack144);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack128);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      goto LAB_7100046134;
    }
    lib::L2CValue::L2CValue
              (aLStack176,_WEAPON_BRAVE_LIGHTNING_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_MOTION_END);
    iVar3 = lib::L2CValue::as_integer(aLStack176);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack160,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack160);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((bVar2 & 1U) != 0) goto LAB_7100046144;
    bVar2 = false;
  }
  else {
LAB_7100046134:
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
LAB_7100046144:
    bVar2 = true;
  }
  lib::L2CValue::L2CValue(aLStack208,bVar2);
  lib::L2CValue::operator_(aLStack208);
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack192);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack208);
  if ((bVar2 & 1U) != 0) {
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator__(pLVar5,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack208,SITUATION_KIND_AIR);
      lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0x30);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::L2CValue
                (aLStack96,_WEAPON_BRAVE_LIGHTNING_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_GROUND);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
    }
    else {
      lib::L2CValue::L2CValue(aLStack208,_SITUATION_KIND_GROUND);
      lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0x30);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::L2CValue
                (aLStack96,_WEAPON_BRAVE_LIGHTNING_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_AIR);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
    }
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue(aLStack128,_WEAPON_BRAVE_LIGHTNING_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_AIR);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
  if ((bVar2 & 1U) == 0) {
LAB_7100046338:
    lib::L2CValue::L2CValue
              (aLStack160,_WEAPON_BRAVE_LIGHTNING_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_GROUND);
    iVar3 = lib::L2CValue::as_integer(aLStack160);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack144);
    if ((bVar2 & 1U) != 0) {
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
      uVar6 = lib::L2CValue::operator__(pLVar5,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack160);
        goto LAB_71000463bc;
      }
    }
    lib::L2CValue::L2CValue
              (aLStack176,_WEAPON_BRAVE_LIGHTNING_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_MOTION_END);
    iVar3 = lib::L2CValue::as_integer(aLStack176);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    if ((bVar2 & 1U) == 0) {
      bVar1 = 0;
    }
    else {
      bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack192,(bool)(bVar1 & 1));
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack192);
      lib::L2CValue::_L2CValue(aLStack192);
    }
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((bVar1 & 1) != 0) goto LAB_7100046470;
    bVar2 = false;
  }
  else {
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
    uVar6 = lib::L2CValue::operator__(pLVar5,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar6 & 1) == 0) goto LAB_7100046338;
LAB_71000463bc:
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
LAB_7100046470:
    bVar2 = true;
  }
  lib::L2CValue::L2CValue(aLStack224,bVar2);
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack224);
  lib::L2CValue::_L2CValue(aLStack224);
  if ((bVar2 & 1U) != 0) {
    FUN_7100045fb0(this);
  }
  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
  uVar6 = lib::L2CValue::operator__(pLVar5,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar6 & 1) != 0) {
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x17);
    lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
    uVar6 = lib::L2CValue::operator__(pLVar5,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack112,_WEAPON_BRAVE_LIGHTNING_INSTANCE_WORK_ID_FLAG_IS_HEAD);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack96,_CAMERA_QUAKE_KIND_L);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::CameraModule__req_quake_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue
                  (aLStack96,_WEAPON_BRAVE_LIGHTNING_INSTANCE_WORK_ID_INT_FIGHTER_OBJECT_ID);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack112,iVar3);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,0x50000000);
        uVar6 = lib::L2CValue::operator__(aLStack112,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar6 & 1) == 0) {
          uVar4 = lib::L2CValue::as_integer(aLStack112);
          bVar1 = app::sv_battle_object::is_null(uVar4);
          lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
          lib::L2CValue::L2CValue(aLStack96,false);
          uVar6 = lib::L2CValue::operator__(aLStack128,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          if ((uVar6 & 1) == 0) {
            pLVar5 = aLStack128;
          }
          else {
            uVar4 = lib::L2CValue::as_integer(aLStack112);
            bVar1 = app::sv_battle_object::is_active(uVar4);
            lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
            bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::_L2CValue(aLStack128);
            if ((bVar2 & 1U) == 0) goto LAB_7100046750;
            uVar4 = lib::L2CValue::as_integer(aLStack112);
            pvVar7 = (void *)app::sv_battle_object::module_accessor(uVar4);
            if (pvVar7 == (void *)0x0) {
              lib::L2CValue::L2CValue(aLStack96,(L2CValue *)&LUA_SCRIPT_LINE_STATUS_SHIFT);
            }
            else {
              lib::L2CValue::L2CValue(aLStack96,pvVar7);
            }
            lib::L2CValue::L2CValue(aLStack128,0x10eaa9bff4);
            lib::L2CValue::L2CValue(aLStack144,0);
            lib::L2CValue::L2CValue(aLStack160,false);
            lib::L2CValue::L2CValue(aLStack176,0x50000000);
            HVar8 = lib::L2CValue::as_hash(aLStack128);
            iVar3 = lib::L2CValue::as_integer(aLStack144);
            bVar1 = lib::L2CValue::as_bool(aLStack160);
            uVar4 = lib::L2CValue::as_integer(aLStack176);
            pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack96);
            app::lua_bind::ControlModule__set_rumble_impl
                      (pBVar9,HVar8,iVar3,(bool)(bVar1 & 1),uVar4);
            lib::L2CValue::_L2CValue(aLStack176);
            lib::L2CValue::_L2CValue(aLStack160);
            lib::L2CValue::_L2CValue(aLStack144);
            lib::L2CValue::_L2CValue(aLStack128);
            pLVar5 = aLStack96;
          }
          lib::L2CValue::_L2CValue(pLVar5);
        }
LAB_7100046750:
        lib::L2CValue::_L2CValue(aLStack112);
      }
    }
  }
  lib::L2CValue::L2CValue(aLStack128,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack112,iVar3);
  lib::L2CValue::L2CValue(aLStack96,0);
  uVar6 = lib::L2CValue::operator__(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack112,_WEAPON_BRAVE_LIGHTNING_INSTANCE_WORK_ID_FLAG_SELF_REMOVE);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((bVar2 & 1U) == 0) goto LAB_71000468a0;
    lib::L2CValue::L2CValue(aLStack112,0x199c462b5d);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
    app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,0x199c462b5d);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
    app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
  }
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
LAB_71000468a0:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

