
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPickel::status::SpecialSDrive_main_loop(L2CFighterPickel *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  ulong uVar6;
  BattleObjectModuleAccessor *pBVar7;
  L2CValue *pLVar8;
  Hash40 HVar9;
  float fVar10;
  float fVar11;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  bVar1 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar2 & 1U) != 0) goto LAB_710004a5c8;
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PICKEL_LINK_NO_TROLLEY);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  bVar1 = app::lua_bind::LinkModule__is_link_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::operator_(aLStack112);
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PICKEL_LINK_NO_TROLLEY);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    uVar4 = app::lua_bind::LinkModule__get_parent_id_impl(this->moduleAccessor,iVar3,true);
    lib::L2CValue::L2CValue(aLStack96,uVar4);
    uVar4 = lib::L2CValue::as_integer(aLStack96);
    pvVar5 = (void *)app::sv_battle_object::module_accessor(uVar4);
    if (pvVar5 == (void *)0x0) {
      lib::L2CValue::L2CValue(aLStack112,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
    }
    else {
      lib::L2CValue::L2CValue(aLStack112,pvVar5);
    }
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack128);
    uVar6 = lib::L2CValue::operator__(aLStack112,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue
                (aLStack144,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_INT_PICKEL_JUMP_DISABLE_FRAME);
      iVar3 = lib::L2CValue::as_integer(aLStack144);
      pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack112);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(pBVar7,iVar3);
      lib::L2CValue::L2CValue(aLStack128,iVar3);
      lib::L2CValue::L2CValue(aLStack96,0);
      uVar6 = lib::L2CValue::operator__(aLStack128,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar6 & 1) != 0) {
        pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x20);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PAD_CMD_CAT1_FLAG_JUMP_BUTTON);
        lib::L2CValue::operator_(pLVar8,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack128);
        lib::L2CValue::_L2CValue(aLStack128);
        if ((bVar2 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PICKEL_STATUS_KIND_SPECIAL_S_JUMP);
          lib::L2CValue::L2CValue(aLStack128,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x80);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_710004a3d8:
          lib::L2CValue::_L2CValue(aLStack112);
          return;
        }
        bVar1 = app::lua_bind::ControlModule__is_enable_flick_jump_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((bVar2 & 1U) != 0) {
          pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x20);
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PAD_CMD_CAT1_FLAG_JUMP);
          lib::L2CValue::operator_(pLVar8,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack128);
          lib::L2CValue::_L2CValue(aLStack128);
          if ((bVar2 & 1U) != 0) {
            lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PICKEL_STATUS_KIND_SPECIAL_S_JUMP);
            lib::L2CValue::L2CValue(aLStack128,false);
            lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x80);
            lib::L2CValue::_L2CValue(aLStack128);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::L2CValue((L2CValue *)return_value,0);
            goto LAB_710004a3d8;
          }
        }
      }
    }
    lib::L2CValue::_L2CValue(aLStack112);
    HVar9 = app::lua_bind::MotionModule__motion_kind_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack112,HVar9);
    lib::L2CValue::L2CValue(aLStack96,0xfcb07f1ed);
    uVar6 = lib::L2CValue::operator__(aLStack112,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar6 & 1) != 0) goto LAB_710004a5c8;
    bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar2 & 1U) == 0) goto LAB_710004a5c8;
    lib::L2CValue::L2CValue(aLStack96,0xfcb07f1ed);
    lib::L2CValue::L2CValue(aLStack112,0.0);
    lib::L2CValue::L2CValue(aLStack128,1.0);
    lib::L2CValue::L2CValue(aLStack144,false);
    HVar9 = lib::L2CValue::as_hash(aLStack96);
    fVar10 = (float)lib::L2CValue::as_number(aLStack112);
    fVar11 = (float)lib::L2CValue::as_number(aLStack128);
    bVar1 = lib::L2CValue::as_bool(aLStack144);
    app::lua_bind::MotionModule__change_motion_impl
              (this->moduleAccessor,HVar9,fVar10,fVar11,(bool)(bVar1 & 1),0.0,false,false);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_FALL);
    lib::L2CValue::L2CValue(aLStack112,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
  }
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
LAB_710004a5c8:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

