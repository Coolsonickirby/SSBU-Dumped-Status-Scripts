
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponPikachuKaminari::status::Regular_main_loop
          (L2CWeaponPikachuKaminari *this,L2CValue *return_value)

{
  long lVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  void *pvVar8;
  Hash40 HVar9;
  BattleObjectModuleAccessor *pBVar10;
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
  
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_PIKACHU_KAMINARI_INSTANCE_WORK_ID_INT_LIFE);
  iVar4 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__dec_int_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack112,_WEAPON_PIKACHU_KAMINARI_INSTANCE_WORK_ID_INT_LIFE);
  iVar4 = lib::L2CValue::as_integer(aLStack112);
  iVar4 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::L2CValue(aLStack96,iVar4);
  lib::L2CValue::L2CValue(aLStack80,0);
  uVar6 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_PIKACHU_KAMINARI_INSTANCE_WORK_ID_FLAG_SELF_REMOVE);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
    bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar3 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack96,0x199c462b5d);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
      app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
      lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
      goto LAB_710002af90;
    }
    iVar4 = 0;
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,0x199c462b5d);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
    app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
LAB_710002af90:
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    iVar4 = 1;
  }
  lib::L2CValue::L2CValue(aLStack192,iVar4);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_PIKACHU_KAMINARI_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_AIR);
  iVar4 = lib::L2CValue::as_integer(aLStack96);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
  bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  if ((bVar3 & 1U) == 0) {
    lib::L2CValue::L2CValue
              (aLStack128,_WEAPON_PIKACHU_KAMINARI_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_GROUND);
    iVar4 = lib::L2CValue::as_integer(aLStack128);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
    bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack112);
    if ((bVar3 & 1U) != 0) {
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      goto LAB_710002b048;
    }
    lib::L2CValue::L2CValue
              (aLStack160,_WEAPON_PIKACHU_KAMINARI_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_MOTION_END);
    iVar4 = lib::L2CValue::as_integer(aLStack160);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue(aLStack144,(bool)(bVar2 & 1));
    bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack144);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar3 & 1U) != 0) goto LAB_710002b058;
    bVar3 = false;
  }
  else {
LAB_710002b048:
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
LAB_710002b058:
    bVar3 = true;
  }
  lib::L2CValue::L2CValue(aLStack208,bVar3);
  lib::L2CValue::operator_(aLStack208);
  bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack176);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack208);
  if ((bVar3 & 1U) != 0) {
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator__(pLVar7,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack208,SITUATION_KIND_AIR);
      lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0x30);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::L2CValue
                (aLStack80,_WEAPON_PIKACHU_KAMINARI_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_GROUND);
      iVar4 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar4);
    }
    else {
      lib::L2CValue::L2CValue(aLStack208,_SITUATION_KIND_GROUND);
      lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0x30);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::L2CValue
                (aLStack80,_WEAPON_PIKACHU_KAMINARI_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_AIR);
      iVar4 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar4);
    }
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue(aLStack112,_WEAPON_PIKACHU_KAMINARI_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_AIR)
  ;
  iVar4 = lib::L2CValue::as_integer(aLStack112);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
  bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  if ((bVar3 & 1U) == 0) {
LAB_710002b24c:
    lib::L2CValue::L2CValue
              (aLStack144,_WEAPON_PIKACHU_KAMINARI_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_GROUND);
    iVar4 = lib::L2CValue::as_integer(aLStack144);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue(aLStack128,(bool)(bVar2 & 1));
    bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack128);
    if ((bVar3 & 1U) != 0) {
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
      uVar6 = lib::L2CValue::operator__(pLVar7,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack144);
        goto LAB_710002b2d0;
      }
    }
    lib::L2CValue::L2CValue
              (aLStack160,_WEAPON_PIKACHU_KAMINARI_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_MOTION_END);
    iVar4 = lib::L2CValue::as_integer(aLStack160);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
    bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    if ((bVar3 & 1U) == 0) {
      bVar2 = 0;
    }
    else {
      bVar2 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack176,(bool)(bVar2 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack176);
      lib::L2CValue::_L2CValue(aLStack176);
    }
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((bVar2 & 1) != 0) goto LAB_710002b384;
    bVar3 = false;
  }
  else {
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
    uVar6 = lib::L2CValue::operator__(pLVar7,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar6 & 1) == 0) goto LAB_710002b24c;
LAB_710002b2d0:
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
LAB_710002b384:
    bVar3 = true;
  }
  lib::L2CValue::L2CValue(aLStack224,bVar3);
  bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack224);
  lib::L2CValue::_L2CValue(aLStack224);
  if ((bVar3 & 1U) != 0) {
    FUN_710002ad30(this);
  }
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
  uVar6 = lib::L2CValue::operator__(pLVar7,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar6 & 1) == 0) goto LAB_710002b66c;
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x17);
  lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
  uVar6 = lib::L2CValue::operator__(pLVar7,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar6 & 1) == 0) goto LAB_710002b66c;
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_PIKACHU_KAMINARI_INSTANCE_WORK_ID_FLAG_IS_HEAD);
  iVar4 = lib::L2CValue::as_integer(aLStack96);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
  bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar3 & 1U) == 0) goto LAB_710002b66c;
  lib::L2CValue::L2CValue(aLStack80,_CAMERA_QUAKE_KIND_L);
  iVar4 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::CameraModule__req_quake_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_PIKACHU_KAMINARI_INSTANCE_WORK_ID_INT_FIGHTER_OBJECT_ID)
  ;
  iVar4 = lib::L2CValue::as_integer(aLStack80);
  iVar4 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::L2CValue(aLStack96,iVar4);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0x50000000);
  uVar6 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar6 & 1) == 0) {
    uVar5 = lib::L2CValue::as_integer(aLStack96);
    bVar2 = app::sv_battle_object::is_null(uVar5);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar6 = lib::L2CValue::operator__(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar6 & 1) == 0) {
      lVar1 = -0x60;
    }
    else {
      uVar5 = lib::L2CValue::as_integer(aLStack96);
      bVar2 = app::sv_battle_object::is_active(uVar5);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
      bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((bVar3 & 1U) == 0) goto LAB_710002b664;
      uVar5 = lib::L2CValue::as_integer(aLStack96);
      pvVar8 = (void *)app::sv_battle_object::module_accessor(uVar5);
      if (pvVar8 == (void *)0x0) {
        lib::L2CValue::L2CValue(aLStack80,(L2CValue *)&LUA_SCRIPT_LINE_STATUS_SYSTEM);
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,pvVar8);
      }
      lib::L2CValue::L2CValue(aLStack112,0x10eaa9bff4);
      lib::L2CValue::L2CValue(aLStack128,0);
      lib::L2CValue::L2CValue(aLStack144,false);
      lib::L2CValue::L2CValue(aLStack160,0x50000000);
      HVar9 = lib::L2CValue::as_hash(aLStack112);
      iVar4 = lib::L2CValue::as_integer(aLStack128);
      bVar2 = lib::L2CValue::as_bool(aLStack144);
      uVar5 = lib::L2CValue::as_integer(aLStack160);
      pBVar10 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack80);
      app::lua_bind::ControlModule__set_rumble_impl(pBVar10,HVar9,iVar4,(bool)(bVar2 & 1),uVar5);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      lVar1 = -0x40;
    }
    lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar1));
  }
LAB_710002b664:
  lib::L2CValue::_L2CValue(aLStack96);
LAB_710002b66c:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

