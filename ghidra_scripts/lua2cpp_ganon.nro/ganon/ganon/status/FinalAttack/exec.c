
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterGanon::status::FinalAttack_exec(L2CFighterGanon *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  void *pvVar6;
  BattleObjectModuleAccessor *pBVar7;
  L2CValue *pLVar8;
  L2CValue *pLVar9;
  L2CValue *this_00;
  float *pfVar10;
  ulong uVar11;
  Hash40 HVar12;
  float fVar13;
  L2CValue aLStack328 [16];
  L2CValue aLStack312 [16];
  L2CValue aLStack296 [16];
  L2CValue aLStack280 [16];
  L2CValue aLStack264 [16];
  undefined4 local_f8 [4];
  L2CValue aLStack232 [16];
  L2CValue aLStack216 [16];
  L2CValue aLStack200 [16];
  L2CValue aLStack184 [16];
  L2CValue aLStack168 [16];
  L2CValue aLStack152 [16];
  L2CValue aLStack136 [16];
  L2CValue aLStack120 [24];
  
  lib::L2CValue::L2CValue
            ((L2CValue *)local_f8,_FIGHTER_GANON_STATUS_WORK_ID_INT_BEAST_BEAST_TASK_ID);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)local_f8);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack120,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)local_f8);
  uVar4 = lib::L2CValue::as_integer(aLStack120);
  bVar1 = app::sv_battle_object::is_null(uVar4);
  lib::L2CValue::L2CValue(aLStack136,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)local_f8,false);
  uVar5 = lib::L2CValue::operator__(aLStack136,(L2CValue *)local_f8);
  lib::L2CValue::_L2CValue((L2CValue *)local_f8);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack136);
LAB_7100006158:
    lib::L2CValue::L2CValue(aLStack328,0.0);
  }
  else {
    uVar4 = lib::L2CValue::as_integer(aLStack120);
    bVar1 = app::sv_battle_object::is_active(uVar4);
    lib::L2CValue::L2CValue((L2CValue *)local_f8,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)local_f8);
    lib::L2CValue::_L2CValue((L2CValue *)local_f8);
    lib::L2CValue::_L2CValue(aLStack136);
    if ((bVar2 & 1U) == 0) goto LAB_7100006158;
    uVar4 = lib::L2CValue::as_integer(aLStack120);
    pvVar6 = (void *)app::sv_battle_object::module_accessor(uVar4);
    if (pvVar6 == (void *)0x0) {
      lib::L2CValue::L2CValue(aLStack136,(L2CValue *)&GROUND_TOUCH_FLAG_LEFT);
    }
    else {
      lib::L2CValue::L2CValue(aLStack136,pvVar6);
    }
    pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack136);
    iVar3 = app::lua_bind::StatusModule__status_kind_impl(pBVar7);
    lib::L2CValue::L2CValue(aLStack152,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)local_f8,_WEAPON_GANON_BEAST_STATUS_KIND_ATTACK);
    uVar5 = lib::L2CValue::operator__(aLStack152,(L2CValue *)local_f8);
    lib::L2CValue::_L2CValue((L2CValue *)local_f8);
    lib::L2CValue::_L2CValue(aLStack152);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack328,0.0);
    }
    else {
      lib::L2CValue::L2CValue(aLStack168,0.0);
      lib::L2CValue::L2CValue(aLStack184,0.0);
      lib::L2CValue::L2CValue(aLStack200,0.0);
      lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0x58,(L2CValue)0x48,(L2CValue)0x38);
      lib::L2CValue::_L2CValue(aLStack200);
      lib::L2CValue::_L2CValue(aLStack184);
      lib::L2CValue::_L2CValue(aLStack168);
      pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack152,0x18cdc1683);
      pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack152,0x1fbdb2615);
      this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack152,0x162d277af);
      pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack136);
      pfVar10 = (float *)app::lua_bind::PostureModule__pos_impl(pBVar7);
      lib::L2CValue::L2CValue((L2CValue *)local_f8,*pfVar10);
      lib::L2CValue::L2CValue(aLStack232,pfVar10[1]);
      lib::L2CValue::L2CValue(aLStack216,pfVar10[2]);
      lib::L2CValue::operator_(pLVar8,(L2CValue *)local_f8);
      lib::L2CValue::operator_(pLVar9,aLStack232);
      lib::L2CValue::operator_(this_00,aLStack216);
      lib::L2CValue::_L2CValue(aLStack216);
      lib::L2CValue::_L2CValue(aLStack232);
      lib::L2CValue::_L2CValue((L2CValue *)local_f8);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      local_f8[0] = app::sv_camera_manager::dead_range(this->luaStateAgent);
      app::lua_bind::lib__Rect__store_l2c_table_impl((Rect *)local_f8);
      lib::L2CValue::L2CValue(aLStack280,0.0);
      fVar13 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack296,fVar13);
      lib::L2CValue::L2CValue((L2CValue *)local_f8,0.0);
      uVar5 = lib::L2CValue::operator_((L2CValue *)local_f8,aLStack296);
      lib::L2CValue::_L2CValue((L2CValue *)local_f8);
      lib::L2CValue::_L2CValue(aLStack296);
      if ((uVar5 & 1) == 0) {
        pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack152,0x18cdc1683);
        pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack264,0x47a67e768);
        lib::L2CValue::operator_(pLVar8,pLVar9);
        lib::L2CValue::operator_(aLStack280,(L2CValue *)local_f8);
      }
      else {
        pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack264,0x5b4ca7514);
        pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack152,0x18cdc1683);
        lib::L2CValue::operator_(pLVar8,pLVar9);
        lib::L2CValue::operator_(aLStack280,(L2CValue *)local_f8);
      }
      lib::L2CValue::_L2CValue((L2CValue *)local_f8);
      lib::L2CValue::L2CValue(aLStack296,0xc71626c4f);
      lib::L2CValue::L2CValue(aLStack312,0x50f26fef6);
      uVar5 = lib::L2CValue::as_integer(aLStack296);
      uVar11 = lib::L2CValue::as_integer(aLStack312);
      pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack136);
      fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl(pBVar7,uVar5,uVar11);
      lib::L2CValue::L2CValue((L2CValue *)local_f8,fVar13);
      lib::L2CValue::_L2CValue(aLStack312);
      lib::L2CValue::_L2CValue(aLStack296);
      lib::L2CValue::operator_(aLStack280,(L2CValue *)local_f8);
      lib::L2CValue::L2CValue(aLStack328,aLStack296);
      lib::L2CValue::_L2CValue(aLStack296);
      lib::L2CValue::_L2CValue((L2CValue *)local_f8);
      lib::L2CValue::_L2CValue(aLStack280);
      lib::L2CValue::_L2CValue(aLStack264);
      lib::L2CValue::_L2CValue(aLStack152);
    }
    lib::L2CValue::_L2CValue(aLStack136);
  }
  lib::L2CValue::_L2CValue(aLStack120);
  lib::L2CValue::L2CValue((L2CValue *)local_f8,5.0);
  uVar5 = lib::L2CValue::operator__((L2CValue *)local_f8,aLStack328);
  lib::L2CValue::_L2CValue((L2CValue *)local_f8);
  if ((uVar5 & 1) == 0) {
LAB_7100006560:
    lib::L2CValue::L2CValue((L2CValue *)local_f8,2.0);
    uVar5 = lib::L2CValue::operator__((L2CValue *)local_f8,aLStack328);
    lib::L2CValue::_L2CValue((L2CValue *)local_f8);
    if ((uVar5 & 1) == 0) goto LAB_7100006608;
    lib::L2CValue::L2CValue((L2CValue *)local_f8,3.0);
    uVar5 = lib::L2CValue::operator_(aLStack328,(L2CValue *)local_f8);
    lib::L2CValue::_L2CValue((L2CValue *)local_f8);
    if ((uVar5 & 1) == 0) goto LAB_7100006608;
    lib::L2CValue::L2CValue((L2CValue *)local_f8,_FIGHTER_ANIMCMD_EFFECT);
    lib::L2CValue::L2CValue(aLStack120,0x13ec29044a);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)local_f8);
    HVar12 = lib::L2CValue::as_hash(aLStack120);
    app::lua_bind::MotionAnimcmdModule__call_script_single_impl
              (this->moduleAccessor,iVar3,HVar12,-1);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)local_f8,6.0);
    uVar5 = lib::L2CValue::operator_(aLStack328,(L2CValue *)local_f8);
    lib::L2CValue::_L2CValue((L2CValue *)local_f8);
    if ((uVar5 & 1) == 0) goto LAB_7100006560;
    lib::L2CValue::L2CValue((L2CValue *)local_f8,_FIGHTER_ANIMCMD_EFFECT);
    lib::L2CValue::L2CValue(aLStack120,0x13752055f0);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)local_f8);
    HVar12 = lib::L2CValue::as_hash(aLStack120);
    app::lua_bind::MotionAnimcmdModule__call_script_single_impl
              (this->moduleAccessor,iVar3,HVar12,-1);
  }
  lib::L2CValue::_L2CValue(aLStack120);
  lib::L2CValue::_L2CValue((L2CValue *)local_f8);
LAB_7100006608:
  FUN_7100006990(this);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack328);
  return;
}

