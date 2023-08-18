
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterShizue::status::SpecialS_main_loop(L2CFighterShizue *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  GroundCliffCheckKind GVar5;
  L2CValue *pLVar6;
  ulong uVar7;
  L2CValue *pLVar8;
  L2CValue *pLVar9;
  L2CValue *pLVar10;
  L2CValue *this_00;
  L2CValue *this_01;
  Hash40 HVar11;
  ulong *this_02;
  uint uVar12;
  undefined8 uVar13;
  long lVar14;
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  ulong local_140;
  undefined8 uStack312;
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  undefined8 local_80;
  ulong uStack120;
  
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue((L2CValue *)&local_140,SITUATION_KIND_AIR);
  uVar7 = lib::L2CValue::operator__(pLVar6,(L2CValue *)&local_140);
  lib::L2CValue::_L2CValue((L2CValue *)&local_140);
  if ((uVar7 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_140,FIGHTER_STATUS_AIR_LASSO_FLAG_CHECK);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_140);
    app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
LAB_71000287b8:
    lib::L2CValue::_L2CValue((L2CValue *)&local_140);
  }
  else {
    lib::L2CValue::L2CValue(aLStack208,FIGHTER_STATUS_AIR_LASSO_FLAG_CHECK);
    iVar3 = lib::L2CValue::as_integer(aLStack208);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_140,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_140);
    lib::L2CValue::_L2CValue((L2CValue *)&local_140);
    lib::L2CValue::_L2CValue(aLStack208);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_80,_FIGHTER_SHIZUE_STATUS_WORK_ID_SPECIAL_S_FLAG_AIR_LASSO_FAIL)
      ;
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_80);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack208,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue((L2CValue *)&local_140,false);
      uVar7 = lib::L2CValue::operator__(aLStack208,(L2CValue *)&local_140);
      lib::L2CValue::_L2CValue((L2CValue *)&local_140);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      if ((uVar7 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack160,false);
        FUN_71000284d0(this,aLStack160);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_140,
                   _FIGHTER_SHIZUE_STATUS_WORK_ID_SPECIAL_S_FLAG_AIR_LASSO_FAIL);
        iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_140);
        app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::_L2CValue((L2CValue *)&local_140);
      }
      lib::L2CValue::L2CValue((L2CValue *)&local_80,_FIGHTER_STATUS_AIR_LASSO_FLAG_IS_CHECK);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_80);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack208,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue((L2CValue *)&local_140,true);
      uVar7 = lib::L2CValue::operator__(aLStack208,(L2CValue *)&local_140);
      lib::L2CValue::_L2CValue((L2CValue *)&local_140);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      if ((uVar7 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_140,FIGHTER_CLIFF_HANG_DATA_DEFAULT);
        uVar12 = lib::L2CValue::as_integer((L2CValue *)&local_140);
        app::lua_bind::GroundModule__select_cliff_hangdata_impl(this->moduleAccessor,uVar12);
        lib::L2CValue::_L2CValue((L2CValue *)&local_140);
        lib::L2CValue::L2CValue((L2CValue *)&local_140,_GROUND_CLIFF_CHECK_KIND_ALWAYS_BOTH_SIDES);
        GVar5 = lib::L2CValue::as_integer((L2CValue *)&local_140);
        app::lua_bind::GroundModule__set_cliff_check_impl(this->moduleAccessor,GVar5);
        lib::L2CValue::_L2CValue((L2CValue *)&local_140);
        lib::L2CValue::L2CValue((L2CValue *)&local_140,_FIGHTER_STATUS_AIR_LASSO_FLAG_IS_CHECK);
        iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_140);
        app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
        goto LAB_71000287b8;
      }
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)&local_140,_FIGHTER_STATUS_AIR_LASSO_FLAG_IS_CHECK);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_140);
      app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue((L2CValue *)&local_140);
      lua2cpp::L2CFighterCommon::sub_fighter_general_term_is_cliff_check_pos(this);
      lib::L2CValue::L2CValue((L2CValue *)&local_140,true);
      uVar7 = lib::L2CValue::operator__(aLStack208,(L2CValue *)&local_140);
      lib::L2CValue::_L2CValue((L2CValue *)&local_140);
      lib::L2CValue::_L2CValue(aLStack208);
      if ((uVar7 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_140,true);
        FUN_71000284d0(this,&local_140);
        lib::L2CValue::_L2CValue((L2CValue *)&local_140);
        lib::L2CValue::L2CValue(aLStack208,_FIGHTER_STATUS_KIND_AIR_LASSO_REACH);
        lib::L2CValue::L2CValue((L2CValue *)&local_80,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x30,(L2CValue)0x80);
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
        lib::L2CValue::_L2CValue(aLStack208);
        lib::L2CValue::L2CValue(aLStack144,_FIGHTER_SHIZUE_GENERATE_ARTICLE_FISHINGLINE);
        iVar3 = lib::L2CValue::as_integer(aLStack144);
        app::lua_bind::ArticleModule__generate_article_impl(this->moduleAccessor,iVar3,false,-1);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::L2CValue(aLStack144,_FIGHTER_SHIZUE_GENERATE_ARTICLE_FISHINGROD);
        lib::L2CValue::L2CValue(aLStack160,_WEAPON_SHIZUE_FISHINGROD_STATUS_KIND_WAIT);
        iVar3 = lib::L2CValue::as_integer(aLStack144);
        iVar4 = lib::L2CValue::as_integer(aLStack160);
        app::lua_bind::ArticleModule__change_status_impl(this->moduleAccessor,iVar3,iVar4,0);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack144);
        iVar3 = 1;
        goto LAB_7100028f70;
      }
    }
  }
  lib::L2CValue::L2CValue(aLStack208,_FIGHTER_SHIZUE_STATUS_WORK_ID_SPECIAL_S_FLAG_SHOOT);
  iVar3 = lib::L2CValue::as_integer(aLStack208);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_140,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_140);
  lib::L2CValue::_L2CValue((L2CValue *)&local_140);
  lib::L2CValue::_L2CValue(aLStack208);
  if ((bVar2 & 1U) != 0) {
    uVar13 = app::lua_bind::GroundModule__center_pos_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack208,(float)uVar13);
    lib::L2CValue::L2CValue(aLStack192,(float)((ulong)uVar13 >> 0x20));
    lib::L2CValue::L2CValue((L2CValue *)&local_140,aLStack208);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,aLStack192);
    lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0xc0,(L2CValue)0x80);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::_L2CValue((L2CValue *)&local_140);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::L2CValue(aLStack240,0.0);
    lib::L2CValue::L2CValue(aLStack256,0.0);
    lib::L2CValue::L2CValue(aLStack272,0.0);
    lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0x10,(L2CValue)0x0,(L2CValue)0xf0);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack240);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack224,0x18cdc1683);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack224,0x1fbdb2615);
    pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack224,0x162d277af);
    lib::L2CValue::L2CValue(aLStack144,0x54f934137);
    pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack224,0x18cdc1683);
    this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack224,0x1fbdb2615);
    this_01 = (L2CValue *)lib::L2CValue::operator__(aLStack224,0x162d277af);
    HVar11 = lib::L2CValue::as_hash(aLStack144);
    uVar7 = lib::L2CValue::as_number(pLVar10);
    lVar14 = lib::L2CValue::as_number(this_00);
    uVar12 = lib::L2CValue::as_number(this_01);
    local_80 = uVar7 & 0xffffffff | lVar14 << 0x20;
    uStack120 = (ulong)uVar12;
    app::lua_bind::ModelModule__joint_global_position_impl
              (this->moduleAccessor,HVar11,(Vector3f *)&local_80,true);
    lib::L2CValue::L2CValue((L2CValue *)&local_140,(float)local_80);
    lib::L2CValue::L2CValue(aLStack304,local_80._4_4_);
    lib::L2CValue::L2CValue(aLStack288,(float)uStack120);
    lib::L2CValue::operator_(pLVar6,(L2CValue *)&local_140);
    lib::L2CValue::operator_(pLVar8,aLStack304);
    lib::L2CValue::operator_(pLVar9,aLStack288);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::_L2CValue((L2CValue *)&local_140);
    lib::L2CValue::_L2CValue(aLStack144);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x18cdc1683);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x1fbdb2615);
    pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack224,0x18cdc1683);
    pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x18cdc1683);
    lib::L2CValue::operator_(pLVar9,pLVar10);
    pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack224,0x1fbdb2615);
    pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x1fbdb2615);
    lib::L2CValue::operator_(pLVar9,pLVar10);
    lib::L2CValue::L2CValue(aLStack368,false);
    uVar7 = lib::L2CValue::as_number(pLVar6);
    uVar12 = lib::L2CValue::as_number(pLVar8);
    local_140 = uVar7 & 0xffffffff | (ulong)uVar12 << 0x20;
    uStack312 = 0;
    uVar7 = lib::L2CValue::as_number(aLStack336);
    uVar12 = lib::L2CValue::as_number(aLStack352);
    local_80 = uVar7 & 0xffffffff | (ulong)uVar12 << 0x20;
    uStack120 = 0;
    bVar1 = lib::L2CValue::as_bool(aLStack368);
    bVar1 = app::lua_bind::GroundModule__ray_check_impl
                      (this->moduleAccessor,(Vector2f *)&local_140,(Vector2f *)&local_80,
                       (bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue((L2CValue *)&local_140,true);
    uVar7 = lib::L2CValue::operator__(aLStack144,(L2CValue *)&local_140);
    lib::L2CValue::_L2CValue((L2CValue *)&local_140);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack368);
    lib::L2CValue::_L2CValue(aLStack352);
    lib::L2CValue::_L2CValue(aLStack336);
    if ((uVar7 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_140,_FIGHTER_SHIZUE_STATUS_KIND_SPECIAL_S_END);
      lib::L2CValue::L2CValue((L2CValue *)&local_80,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0x80);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      lib::L2CValue::_L2CValue((L2CValue *)&local_140);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack176);
      return;
    }
    lib::L2CValue::L2CValue(aLStack352,_FIGHTER_SHIZUE_STATUS_WORK_ID_SPECIAL_S_FLAG_FLICK);
    iVar3 = lib::L2CValue::as_integer(aLStack352);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack336,(bool)(bVar1 & 1));
    app::WeaponShizueFishingrodLinkEventShoot::new_l2c_table();
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&local_140,0x642cfe451);
    lib::L2CValue::operator_(pLVar6,aLStack336);
    lib::L2CValue::L2CValue(aLStack144,_WEAPON_LINK_NO_CONSTRAINT);
    FUN_71000226c0(&local_80,this,aLStack144,&local_140);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue((L2CValue *)&local_140);
    lib::L2CValue::_L2CValue(aLStack336);
    lib::L2CValue::_L2CValue(aLStack352);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_140,_FIGHTER_SHIZUE_STATUS_WORK_ID_SPECIAL_S_FLAG_SHOOT);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_140);
    app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue((L2CValue *)&local_140);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack176);
  }
  bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)&local_140,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_140);
  lib::L2CValue::_L2CValue((L2CValue *)&local_140);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_80,0x976c3b29b);
    lib::L2CValue::L2CValue(aLStack144,0xd2b3a620b);
    lib::L2CValue::L2CValue(aLStack176,_FIGHTER_KINETIC_TYPE_AIR_STOP);
    FUN_710001c520(&local_140,this,&local_80,aLStack144,aLStack176);
    lib::L2CValue::_L2CValue((L2CValue *)&local_140);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack144);
    this_02 = &local_80;
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_140,_FIGHTER_SHIZUE_STATUS_KIND_SPECIAL_S_REEL);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0x80);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    this_02 = &local_140;
  }
  lib::L2CValue::_L2CValue((L2CValue *)this_02);
  iVar3 = 0;
LAB_7100028f70:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}

