
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPickel::status::AttackAirLwLoop_main_loop(L2CFighterPickel *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  GroundCorrectKind GVar3;
  int iVar4;
  uint uVar5;
  L2CValue *pLVar6;
  ulong uVar7;
  void *pvVar8;
  Article *pAVar9;
  BattleObjectModuleAccessor *pBVar10;
  ulong uVar11;
  L2CValue *pLVar12;
  L2CValue *this_01;
  L2CValue *this_02;
  L2CValue *this_03;
  L2CValue *this_04;
  Hash40 HVar13;
  float *this_05;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  L2CValue aLStack320 [16];
  float afStack304 [4];
  undefined8 local_120;
  ulong uStack280;
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  float local_80;
  float fStack124;
  ulong uStack120;
  
  this_00 = &this->globalTable;
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
  lib::L2CValue::L2CValue((L2CValue *)&local_120,_SITUATION_KIND_GROUND);
  uVar7 = lib::L2CValue::operator__(pLVar6,(L2CValue *)&local_120);
  lib::L2CValue::_L2CValue((L2CValue *)&local_120);
  if ((uVar7 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_120,_FIGHTER_STATUS_KIND_FALL);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xe0,(L2CValue)0x80);
    goto LAB_710008024c;
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_120,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
  GVar3 = lib::L2CValue::as_integer((L2CValue *)&local_120);
  app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_120);
  lib::L2CValue::L2CValue((L2CValue *)&local_120,_FIGHTER_PICKEL_GENERATE_ARTICLE_FORGE);
  iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_120);
  pvVar8 = (void *)app::lua_bind::ArticleModule__get_article_impl(this->moduleAccessor,iVar4);
  if (pvVar8 == (void *)0x0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_80,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_80,pvVar8);
  }
  lib::L2CValue::_L2CValue((L2CValue *)&local_120);
  uVar7 = lib::L2CValue::operator__((L2CValue *)&local_80,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
  if ((uVar7 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_PICKEL_LINK_NO_FORGE);
    iVar4 = lib::L2CValue::as_integer(aLStack144);
    bVar1 = app::lua_bind::LinkModule__is_link_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)&local_120,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_120);
    lib::L2CValue::_L2CValue((L2CValue *)&local_120);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((bVar2 & 1U) != 0) {
      pAVar9 = (Article *)lib::L2CValue::as_pointer((L2CValue *)&local_80);
      uVar5 = app::lua_bind::Article__get_battle_object_id_impl(pAVar9);
      lib::L2CValue::L2CValue((L2CValue *)&local_120,uVar5);
      uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_120);
      pvVar8 = (void *)app::sv_battle_object::module_accessor(uVar5);
      if (pvVar8 == (void *)0x0) {
        lib::L2CValue::L2CValue(aLStack144,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
      }
      else {
        lib::L2CValue::L2CValue(aLStack144,pvVar8);
      }
      lib::L2CValue::_L2CValue((L2CValue *)&local_120);
      pBVar10 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack144);
      iVar4 = app::lua_bind::StatusModule__situation_kind_impl(pBVar10);
      lib::L2CValue::L2CValue(aLStack160,iVar4);
      lib::L2CValue::L2CValue((L2CValue *)&local_120,_SITUATION_KIND_GROUND);
      uVar7 = lib::L2CValue::operator__(aLStack160,(L2CValue *)&local_120);
      lib::L2CValue::_L2CValue((L2CValue *)&local_120);
      lib::L2CValue::_L2CValue(aLStack160);
      if ((uVar7 & 1) != 0) {
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_120,_FIGHTER_INSTANCE_WORK_ID_FLAG_IGNORE_LAMDING_RECOVER);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_120);
        app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar4);
        lib::L2CValue::_L2CValue((L2CValue *)&local_120);
        lib::L2CValue::L2CValue((L2CValue *)&local_120,_FIGHTER_STATUS_KIND_LANDING_ATTACK_AIR);
        lib::L2CValue::L2CValue(aLStack160,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xe0,(L2CValue)0x60);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue((L2CValue *)&local_120);
        lib::L2CValue::L2CValue((L2CValue *)return_value,0);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
        return;
      }
      lib::L2CValue::_L2CValue(aLStack144);
    }
  }
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_PICKEL_GENERATE_ARTICLE_FORGE);
  iVar4 = lib::L2CValue::as_integer(aLStack144);
  bVar1 = app::lua_bind::ArticleModule__is_exist_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::L2CValue((L2CValue *)&local_80,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_120,false);
  uVar7 = lib::L2CValue::operator__((L2CValue *)&local_80,(L2CValue *)&local_120);
  lib::L2CValue::_L2CValue((L2CValue *)&local_120);
  if ((uVar7 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack176,_FIGHTER_PICKEL_LINK_NO_FORGE);
    iVar4 = lib::L2CValue::as_integer(aLStack176);
    bVar1 = app::lua_bind::LinkModule__is_link_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue(aLStack160,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue((L2CValue *)&local_120,false);
    uVar7 = lib::L2CValue::operator__(aLStack160,(L2CValue *)&local_120);
    lib::L2CValue::_L2CValue((L2CValue *)&local_120);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_120,0xdf05c072b);
      lib::L2CValue::L2CValue((L2CValue *)&local_80,0x1fb10a8c0b);
      uVar7 = lib::L2CValue::as_integer((L2CValue *)&local_120);
      uVar11 = lib::L2CValue::as_integer((L2CValue *)&local_80);
      iVar4 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar7,uVar11);
      lib::L2CValue::L2CValue(aLStack144,iVar4);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      lib::L2CValue::_L2CValue((L2CValue *)&local_120);
      lib::L2CValue::L2CValue((L2CValue *)&local_120,0xdf05c072b);
      lib::L2CValue::L2CValue((L2CValue *)&local_80,0x1ed424abaa);
      uVar7 = lib::L2CValue::as_integer((L2CValue *)&local_120);
      uVar11 = lib::L2CValue::as_integer((L2CValue *)&local_80);
      iVar4 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar7,uVar11);
      lib::L2CValue::L2CValue(aLStack160,iVar4);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      lib::L2CValue::_L2CValue((L2CValue *)&local_120);
      lib::L2CValue::L2CValue(aLStack176,false);
      lib::L2CValue::L2CValue(aLStack208,0.0);
      lib::L2CValue::L2CValue(aLStack224,0.0);
      lib::L2CValue::L2CValue(aLStack240,0.0);
      lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0x30,(L2CValue)0x20,(L2CValue)0x10);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack208);
      pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x18cdc1683);
      pLVar12 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x1fbdb2615);
      this_01 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x162d277af);
      lib::L2CValue::L2CValue((L2CValue *)afStack304,0x35dbfe258);
      this_02 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x18cdc1683);
      this_03 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x1fbdb2615);
      this_04 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x162d277af);
      HVar13 = lib::L2CValue::as_hash((L2CValue *)afStack304);
      local_80 = (float)lib::L2CValue::as_number(this_02);
      fStack124 = (float)lib::L2CValue::as_number(this_03);
      uVar5 = lib::L2CValue::as_number(this_04);
      uStack120 = (ulong)uVar5;
      app::lua_bind::ModelModule__joint_global_position_impl
                (this->moduleAccessor,HVar13,(Vector3f *)&local_80,true);
      lib::L2CValue::L2CValue((L2CValue *)&local_120,local_80);
      lib::L2CValue::L2CValue(aLStack272,fStack124);
      lib::L2CValue::L2CValue(aLStack256,(float)uStack120);
      lib::L2CValue::operator_(pLVar6,(L2CValue *)&local_120);
      lib::L2CValue::operator_(pLVar12,aLStack272);
      lib::L2CValue::operator_(this_01,aLStack256);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue((L2CValue *)&local_120);
      lib::L2CValue::_L2CValue((L2CValue *)afStack304);
      pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x1fbdb2615);
      fVar14 = (float)app::lua_bind::PostureModule__scale_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack320,fVar14);
      lib::L2CValue::L2CValue((L2CValue *)&local_120,3.0);
      lib::L2CValue::operator_((L2CValue *)&local_120,aLStack320);
      lib::L2CValue::_L2CValue((L2CValue *)&local_120);
      lib::L2CValue::operator_(pLVar6,(L2CValue *)afStack304);
      pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x1fbdb2615);
      lib::L2CValue::operator_(pLVar6,(L2CValue *)&local_80);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      lib::L2CValue::_L2CValue((L2CValue *)afStack304);
      lib::L2CValue::_L2CValue(aLStack320);
      pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x18cdc1683);
      pLVar12 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x1fbdb2615);
      lib::L2CValue::L2CValue((L2CValue *)afStack304,0.0);
      uVar15 = lib::L2CValue::as_number(pLVar6);
      uVar16 = lib::L2CValue::as_number(pLVar12);
      uVar5 = lib::L2CValue::as_number((L2CValue *)afStack304);
      local_120 = CONCAT44(uVar16,uVar15);
      uStack280 = (ulong)uVar5;
      iVar4 = app::GroundUtility::check_dead_area((Vector3f *)&local_120);
      lib::L2CValue::L2CValue((L2CValue *)&local_80,iVar4);
      lib::L2CValue::L2CValue((L2CValue *)&local_120,_GROUND_DEAD_AREA_CHECK_RESULT_OUTSIDE_UP);
      uVar7 = lib::L2CValue::operator__((L2CValue *)&local_80,(L2CValue *)&local_120);
      lib::L2CValue::_L2CValue((L2CValue *)&local_120);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      lib::L2CValue::_L2CValue((L2CValue *)afStack304);
      if ((uVar7 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_120,true);
        lib::L2CValue::operator_(aLStack176,(L2CValue *)&local_120);
        lib::L2CValue::_L2CValue((L2CValue *)&local_120);
      }
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack176);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_80,0xdf05c072b);
        lib::L2CValue::L2CValue((L2CValue *)afStack304,0x29dabfb13a);
        uVar7 = lib::L2CValue::as_integer((L2CValue *)&local_80);
        uVar11 = lib::L2CValue::as_integer((L2CValue *)afStack304);
        iVar4 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar7,uVar11);
        lib::L2CValue::L2CValue((L2CValue *)&local_120,iVar4);
        lib::L2CValue::operator_(aLStack160,(L2CValue *)&local_120);
        lib::L2CValue::_L2CValue((L2CValue *)&local_120);
        lib::L2CValue::_L2CValue((L2CValue *)afStack304);
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      }
      lib::L2CValue::L2CValue
                ((L2CValue *)afStack304,_FIGHTER_PICKEL_STATUS_ATTACK_WORK_INT_ATTACK_AIR_LW_COUNT);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)afStack304);
      iVar4 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar4);
      lib::L2CValue::L2CValue((L2CValue *)&local_80,iVar4);
      uVar7 = lib::L2CValue::operator__(aLStack144,(L2CValue *)&local_80);
      if ((uVar7 & 1) == 0) {
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
        this_05 = afStack304;
LAB_7100080890:
        lib::L2CValue::_L2CValue((L2CValue *)this_05);
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)&local_120,false);
        uVar7 = lib::L2CValue::operator__(aLStack176,(L2CValue *)&local_120);
        lib::L2CValue::_L2CValue((L2CValue *)&local_120);
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
        lib::L2CValue::_L2CValue((L2CValue *)afStack304);
        if ((uVar7 & 1) != 0) {
          pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x20);
          lib::L2CValue::L2CValue((L2CValue *)&local_120,_FIGHTER_PAD_CMD_CAT1_FLAG_JUMP_BUTTON);
          lib::L2CValue::operator_(pLVar6,(L2CValue *)&local_120);
          lib::L2CValue::_L2CValue((L2CValue *)&local_120);
          bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_80);
          lib::L2CValue::_L2CValue((L2CValue *)&local_80);
          if ((bVar2 & 1U) != 0) {
            lua2cpp::L2CFighterCommon::sub_check_button_jump(this);
            lib::L2CValue::L2CValue((L2CValue *)&local_120,true);
            uVar7 = lib::L2CValue::operator__((L2CValue *)&local_80,(L2CValue *)&local_120);
            lib::L2CValue::_L2CValue((L2CValue *)&local_120);
            lib::L2CValue::_L2CValue((L2CValue *)&local_80);
            if ((uVar7 & 1) != 0) {
              lib::L2CValue::L2CValue((L2CValue *)&local_120,_FIGHTER_STATUS_KIND_JUMP_SQUAT);
              lib::L2CValue::L2CValue((L2CValue *)&local_80,true);
              lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xe0,(L2CValue)0x80);
              lib::L2CValue::_L2CValue((L2CValue *)&local_80);
              lib::L2CValue::_L2CValue((L2CValue *)&local_120);
              lib::L2CValue::L2CValue((L2CValue *)return_value,0);
              goto LAB_710008094c;
            }
          }
          bVar1 = app::lua_bind::ControlModule__is_enable_flick_jump_impl(this->moduleAccessor);
          lib::L2CValue::L2CValue((L2CValue *)&local_80,(bool)(bVar1 & 1));
          bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_80);
          if ((bVar2 & 1U) == 0) {
            this_05 = &local_80;
            goto LAB_7100080890;
          }
          pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x20);
          lib::L2CValue::L2CValue((L2CValue *)&local_120,_FIGHTER_PAD_CMD_CAT1_FLAG_JUMP);
          lib::L2CValue::operator_(pLVar6,(L2CValue *)&local_120);
          lib::L2CValue::_L2CValue((L2CValue *)&local_120);
          bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)afStack304);
          lib::L2CValue::_L2CValue((L2CValue *)afStack304);
          lib::L2CValue::_L2CValue((L2CValue *)&local_80);
          if ((bVar2 & 1U) != 0) {
            lua2cpp::L2CFighterCommon::sub_check_button_frick(this);
            lib::L2CValue::L2CValue((L2CValue *)&local_120,true);
            uVar7 = lib::L2CValue::operator__((L2CValue *)&local_80,(L2CValue *)&local_120);
            lib::L2CValue::_L2CValue((L2CValue *)&local_120);
            lib::L2CValue::_L2CValue((L2CValue *)&local_80);
            if ((uVar7 & 1) != 0) {
              lib::L2CValue::L2CValue((L2CValue *)&local_120,_FIGHTER_STATUS_KIND_JUMP_SQUAT);
              lib::L2CValue::L2CValue((L2CValue *)&local_80,true);
              lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xe0,(L2CValue)0x80);
              lib::L2CValue::_L2CValue((L2CValue *)&local_80);
              lib::L2CValue::_L2CValue((L2CValue *)&local_120);
              lib::L2CValue::L2CValue((L2CValue *)return_value,0);
              goto LAB_710008094c;
            }
          }
        }
      }
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_80,_FIGHTER_PICKEL_STATUS_ATTACK_WORK_INT_ATTACK_AIR_LW_COUNT);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_80);
      iVar4 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar4);
      lib::L2CValue::L2CValue((L2CValue *)&local_120,iVar4);
      uVar7 = lib::L2CValue::operator__(aLStack160,(L2CValue *)&local_120);
      lib::L2CValue::_L2CValue((L2CValue *)&local_120);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      if ((uVar7 & 1) == 0) {
        FUN_710007fa30(this);
        lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      }
      else {
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_120,_FIGHTER_PICKEL_STATUS_KIND_ATTACK_AIR_LW_END);
        lib::L2CValue::L2CValue((L2CValue *)&local_80,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xe0,(L2CValue)0x80);
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
        lib::L2CValue::_L2CValue((L2CValue *)&local_120);
        lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      }
LAB_710008094c:
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      return;
    }
  }
  else {
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::_L2CValue(aLStack144);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_120,_FIGHTER_STATUS_KIND_FALL);
  lib::L2CValue::L2CValue((L2CValue *)&local_80,false);
  lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xe0,(L2CValue)0x80);
LAB_710008024c:
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  lib::L2CValue::_L2CValue((L2CValue *)&local_120);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

