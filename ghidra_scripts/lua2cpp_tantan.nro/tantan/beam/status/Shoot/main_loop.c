
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponTantanBeam::status::Shoot_main_loop(L2CWeaponTantanBeam *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  ulong uVar7;
  L2CValue *pLVar8;
  L2CValue *pLVar9;
  L2CValue *this_01;
  L2CValue *pLVar10;
  L2CValue *pLVar11;
  Weapon *pWVar12;
  ulong uVar13;
  BattleObjectModuleAccessor **ppBVar14;
  float fVar15;
  uint uVar16;
  uint uVar17;
  undefined8 uVar18;
  long lVar19;
  L2CValue aLStack592 [16];
  L2CValue aLStack576 [16];
  L2CValue aLStack560 [16];
  L2CValue aLStack544 [16];
  L2CValue aLStack528 [16];
  L2CValue aLStack512 [16];
  L2CValue aLStack496 [16];
  L2CValue aLStack480 [16];
  L2CValue aLStack464 [16];
  L2CValue aLStack448 [16];
  L2CValue aLStack432 [16];
  L2CValue aLStack416 [16];
  L2CValue aLStack400 [16];
  L2CValue aLStack384 [16];
  L2CValue aLStack368 [16];
  undefined auStack352 [32];
  undefined local_140 [32];
  L2CValue aLStack288 [24];
  L2CValue aLStack264 [16];
  L2CValue aLStack248 [16];
  L2CValue aLStack232 [16];
  L2CValue aLStack216 [16];
  L2CValue aLStack200 [16];
  L2CValue aLStack184 [16];
  L2CValue aLStack168 [16];
  L2CValue aLStack152 [16];
  L2CValue aLStack136 [24];
  
  ppBVar14 = &this->moduleAccessor;
  pfVar6 = (float *)app::lua_bind::PostureModule__pos_impl(*ppBVar14);
  lib::L2CValue::L2CValue(aLStack200,*pfVar6);
  lib::L2CValue::L2CValue(aLStack184,pfVar6[1]);
  lib::L2CValue::L2CValue(aLStack168,pfVar6[2]);
  FUN_710000eb70(aLStack152,this,aLStack200);
  lib::L2CValue::_L2CValue(aLStack168);
  lib::L2CValue::_L2CValue(aLStack184);
  lib::L2CValue::_L2CValue(aLStack200);
  lib::L2CValue::L2CValue(aLStack216,_WEAPON_TANTAN_BEAM_STATUS_WORK_ID_FLAG_INIT_ROTATE_DEGREE);
  iVar4 = lib::L2CValue::as_integer(aLStack216);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar14,iVar4);
  lib::L2CValue::L2CValue(aLStack136,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)local_140,false);
  uVar7 = lib::L2CValue::operator__(aLStack136,(L2CValue *)local_140);
  lib::L2CValue::_L2CValue((L2CValue *)local_140);
  lib::L2CValue::_L2CValue(aLStack136);
  lib::L2CValue::_L2CValue(aLStack216);
  if ((uVar7 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack232,0.0);
    lib::L2CValue::L2CValue(aLStack248,0.0);
    fVar15 = 0.0;
    lib::L2CValue::L2CValue(aLStack264,0.0);
    lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0x18,(L2CValue)0x8,(L2CValue)0xf8);
    lib::L2CValue::_L2CValue(aLStack264);
    lib::L2CValue::_L2CValue(aLStack248);
    lib::L2CValue::_L2CValue(aLStack232);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack136,0x18cdc1683);
    pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack136,0x1fbdb2615);
    this_01 = (L2CValue *)lib::L2CValue::operator__(aLStack136,0x162d277af);
    lib::L2CValue::L2CValue(aLStack216,_WEAPON_LINK_NO_CONSTRAINT);
    lib::L2CValue::L2CValue((L2CValue *)(auStack352 + 0x10),0x4d27eea40);
    iVar4 = lib::L2CValue::as_integer(aLStack216);
    pLVar10 = (L2CValue *)lib::L2CValue::as_hash((L2CValue *)(auStack352 + 0x10));
    uVar18 = app::lua_bind::LinkModule__get_parent_model_joint_global_position_impl
                       (*ppBVar14,iVar4,(Hash40)pLVar10,false);
    lib::L2CValue::L2CValue((L2CValue *)local_140,(float)uVar18);
    pLVar11 = (L2CValue *)(local_140 + 0x10);
    lib::L2CValue::L2CValue(pLVar11,(float)((ulong)uVar18 >> 0x20));
    lib::L2CValue::L2CValue(aLStack288,fVar15);
    lib::L2CValue::operator_(pLVar8,(L2CValue *)local_140);
    lib::L2CValue::operator_(pLVar9,pLVar11);
    lib::L2CValue::operator_(this_01,aLStack288);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue(pLVar11);
    lib::L2CValue::_L2CValue((L2CValue *)local_140);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack352 + 0x10));
    lib::L2CValue::_L2CValue(aLStack216);
    pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack136,0x18cdc1683);
    lib::L2CValue::L2CValue
              ((L2CValue *)(auStack352 + 0x10),
               _WEAPON_TANTAN_BEAM_INSTANCE_WORK_ID_FLOAT_PARENT_JOINT_POS_X);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)(auStack352 + 0x10));
    fVar15 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar14,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)local_140,fVar15);
    lib::L2CValue::operator_(pLVar11,(L2CValue *)local_140);
    lib::L2CValue::_L2CValue((L2CValue *)local_140);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack352 + 0x10));
    pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack136,0x1fbdb2615);
    lib::L2CValue::L2CValue
              ((L2CValue *)auStack352,_WEAPON_TANTAN_BEAM_INSTANCE_WORK_ID_FLOAT_PARENT_JOINT_POS_Y)
    ;
    iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack352);
    fVar15 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar14,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)local_140,fVar15);
    lib::L2CValue::operator_(pLVar11,(L2CValue *)local_140);
    lib::L2CValue::_L2CValue((L2CValue *)local_140);
    lib::L2CValue::_L2CValue((L2CValue *)auStack352);
    pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack152,0x18cdc1683);
    lib::L2CValue::operator_(pLVar11,aLStack216);
    pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack152,0x18cdc1683);
    lib::L2CValue::operator_(pLVar11,(L2CValue *)local_140);
    lib::L2CValue::_L2CValue((L2CValue *)local_140);
    pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack152,0x1fbdb2615);
    lib::L2CValue::operator_(pLVar11,(L2CValue *)(auStack352 + 0x10));
    pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack152,0x1fbdb2615);
    lib::L2CValue::operator_(pLVar11,(L2CValue *)local_140);
    lib::L2CValue::_L2CValue((L2CValue *)local_140);
    pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack152,0x18cdc1683);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack152,0x1fbdb2615);
    pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack152,0x162d277af);
    uVar7 = lib::L2CValue::as_number(pLVar11);
    lVar19 = lib::L2CValue::as_number(pLVar8);
    uVar16 = lib::L2CValue::as_number(pLVar9);
    local_140._0_8_ = (void **)(uVar7 & 0xffffffff | lVar19 << 0x20);
    local_140._8_8_ = (lua_State *)(ulong)uVar16;
    app::lua_bind::PostureModule__set_pos_impl(*ppBVar14,(Vector3f *)local_140);
    pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack152,0x1fbdb2615);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack136,0x1fbdb2615);
    lib::L2CValue::operator_(pLVar11,pLVar8);
    pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack152,0x18cdc1683);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack136,0x18cdc1683);
    lib::L2CValue::operator_(pLVar11,pLVar8);
    fVar15 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar14);
    lib::L2CValue::L2CValue(aLStack400,fVar15);
    lib::L2CValue::operator_(aLStack384,aLStack400);
    pLVar11 = aLStack368;
    lib::L2CAgent::math_atan((L2CAgent *)local_140,pLVar11,pLVar10);
    lib::L2CValue::_L2CValue(aLStack368);
    lib::L2CValue::_L2CValue(aLStack400);
    lib::L2CValue::_L2CValue(aLStack384);
    lib::L2CValue::_L2CValue((L2CValue *)local_140);
    lib::L2CAgent::math_deg((L2CAgent *)auStack352,pLVar11);
    lib::L2CValue::L2CValue((L2CValue *)local_140,0.0);
    lib::L2CValue::operator_(aLStack368,(L2CValue *)local_140);
    lib::L2CValue::_L2CValue((L2CValue *)local_140);
    lib::L2CValue::L2CValue
              ((L2CValue *)local_140,_WEAPON_TANTAN_BEAM_STATUS_WORK_ID_FLOAT_ROTATE_DEGREE);
    fVar15 = (float)lib::L2CValue::as_number(aLStack384);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)local_140);
    app::lua_bind::WorkModule__set_float_impl(*ppBVar14,fVar15,iVar4);
    lib::L2CValue::_L2CValue((L2CValue *)local_140);
    lib::L2CValue::_L2CValue(aLStack384);
    lib::L2CValue::L2CValue
              ((L2CValue *)local_140,_WEAPON_TANTAN_BEAM_STATUS_WORK_ID_FLAG_INIT_ROTATE_DEGREE);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)local_140);
    app::lua_bind::WorkModule__on_flag_impl(*ppBVar14,iVar4);
    lib::L2CValue::_L2CValue((L2CValue *)local_140);
    FUN_710000cd10(this);
    lib::L2CValue::_L2CValue(aLStack368);
    lib::L2CValue::_L2CValue((L2CValue *)auStack352);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack352 + 0x10));
    lib::L2CValue::_L2CValue(aLStack216);
    lib::L2CValue::_L2CValue(aLStack136);
  }
  lib::L2CValue::L2CValue(aLStack216,_WEAPON_LINK_NO_CONSTRAINT);
  iVar4 = lib::L2CValue::as_integer(aLStack216);
  bVar1 = app::lua_bind::LinkModule__is_link_impl(*ppBVar14,iVar4);
  lib::L2CValue::L2CValue(aLStack136,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack136);
  if ((bVar2 & 1U) == 0) {
    pLVar11 = aLStack136;
  }
  else {
    bVar1 = app::lua_bind::StatusModule__is_changing_impl(*ppBVar14);
    lib::L2CValue::L2CValue((L2CValue *)(auStack352 + 0x10),(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue((L2CValue *)local_140,false);
    uVar7 = lib::L2CValue::operator__((L2CValue *)(auStack352 + 0x10),(L2CValue *)local_140);
    lib::L2CValue::_L2CValue((L2CValue *)local_140);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack352 + 0x10));
    lib::L2CValue::_L2CValue(aLStack136);
    lib::L2CValue::_L2CValue(aLStack216);
    if ((uVar7 & 1) == 0) goto LAB_710000e474;
    this_00 = &this->globalTable;
    pLVar11 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,4);
    pWVar12 = (Weapon *)lib::L2CValue::as_pointer(pLVar11);
    uVar18 = app::WeaponSpecializer_TantanBeam::calc_nest_pos(pWVar12);
    lib::L2CValue::L2CValue(aLStack432,(float)uVar18);
    lib::L2CValue::L2CValue(aLStack416,(float)((ulong)uVar18 >> 0x20));
    lib::L2CValue::L2CValue((L2CValue *)local_140,aLStack432);
    lib::L2CValue::L2CValue(aLStack136,aLStack416);
    lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0xc0,(L2CValue)0x78);
    lib::L2CValue::_L2CValue(aLStack136);
    lib::L2CValue::_L2CValue((L2CValue *)local_140);
    lib::L2CValue::_L2CValue(aLStack416);
    lib::L2CValue::_L2CValue(aLStack432);
    pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack216,0x18cdc1683);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack216,0x1fbdb2615);
    pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack152,0x162d277af);
    uVar7 = lib::L2CValue::as_number(pLVar11);
    lVar19 = lib::L2CValue::as_number(pLVar8);
    uVar16 = lib::L2CValue::as_number(pLVar9);
    local_140._0_8_ = (void **)(uVar7 & 0xffffffff | lVar19 << 0x20);
    local_140._8_8_ = (lua_State *)(ulong)uVar16;
    app::lua_bind::PostureModule__set_pos_impl(*ppBVar14,(Vector3f *)local_140);
    pLVar11 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,4);
    lib::L2CValue::L2CValue(aLStack368,_WEAPON_TANTAN_BEAM_STATUS_WORK_ID_FLOAT_LENGTH);
    iVar4 = lib::L2CValue::as_integer(aLStack368);
    fVar15 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar14,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)auStack352,fVar15);
    pWVar12 = (Weapon *)lib::L2CValue::as_pointer(pLVar11);
    fVar15 = (float)lib::L2CValue::as_number((L2CValue *)auStack352);
    uVar18 = app::WeaponSpecializer_TantanBeam::calc_tip_pos(pWVar12,fVar15);
    lib::L2CValue::L2CValue(aLStack464,(float)uVar18);
    lib::L2CValue::L2CValue(aLStack448,(float)((ulong)uVar18 >> 0x20));
    lib::L2CValue::L2CValue((L2CValue *)local_140,aLStack464);
    lib::L2CValue::L2CValue(aLStack136,aLStack448);
    lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0xc0,(L2CValue)0x78);
    lib::L2CValue::_L2CValue(aLStack136);
    lib::L2CValue::_L2CValue((L2CValue *)local_140);
    lib::L2CValue::_L2CValue(aLStack448);
    lib::L2CValue::_L2CValue(aLStack464);
    lib::L2CValue::_L2CValue((L2CValue *)auStack352);
    lib::L2CValue::_L2CValue(aLStack368);
    pLVar11 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)(auStack352 + 0x10),0x18cdc1683);
    lib::L2CValue::L2CValue((L2CValue *)local_140,0.0);
    lib::L2CValue::operator_(pLVar11,(L2CValue *)local_140);
    lib::L2CValue::_L2CValue((L2CValue *)local_140);
    lib::L2CValue::L2CValue
              ((L2CValue *)local_140,_WEAPON_TANTAN_BEAM_INSTANCE_WORK_ID_FLOAT_TIP_POS_X);
    fVar15 = (float)lib::L2CValue::as_number(aLStack136);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)local_140);
    app::lua_bind::WorkModule__set_float_impl(*ppBVar14,fVar15,iVar4);
    lib::L2CValue::_L2CValue((L2CValue *)local_140);
    lib::L2CValue::_L2CValue(aLStack136);
    pLVar11 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)(auStack352 + 0x10),0x1fbdb2615);
    lib::L2CValue::L2CValue((L2CValue *)local_140,0.0);
    lib::L2CValue::operator_(pLVar11,(L2CValue *)local_140);
    lib::L2CValue::_L2CValue((L2CValue *)local_140);
    lib::L2CValue::L2CValue
              ((L2CValue *)local_140,_WEAPON_TANTAN_BEAM_INSTANCE_WORK_ID_FLOAT_TIP_POS_Y);
    fVar15 = (float)lib::L2CValue::as_number(aLStack136);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)local_140);
    app::lua_bind::WorkModule__set_float_impl(*ppBVar14,fVar15,iVar4);
    lib::L2CValue::_L2CValue((L2CValue *)local_140);
    lib::L2CValue::_L2CValue(aLStack136);
    lib::L2CValue::L2CValue((L2CValue *)auStack352,_WEAPON_TANTAN_BEAM_STATUS_WORK_ID_FLOAT_LENGTH);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack352);
    fVar15 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar14,iVar4);
    lib::L2CValue::L2CValue(aLStack136,fVar15);
    lib::L2CValue::L2CValue((L2CValue *)local_140,0.0);
    uVar7 = lib::L2CValue::operator__(aLStack136,(L2CValue *)local_140);
    lib::L2CValue::_L2CValue((L2CValue *)local_140);
    lib::L2CValue::_L2CValue(aLStack136);
    lib::L2CValue::_L2CValue((L2CValue *)auStack352);
    if ((uVar7 & 1) != 0) {
      FUN_710000cd10(this);
    }
    pLVar11 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,4);
    pWVar12 = (Weapon *)lib::L2CValue::as_pointer(pLVar11);
    app::WeaponSpecializer_TantanBeam::update_tip_pos(pWVar12);
    lib::L2CValue::L2CValue(aLStack136,_WEAPON_TANTAN_BEAM_INSTANCE_WORK_ID_FLAG_INIT_ATTACK_SLEEP);
    iVar4 = lib::L2CValue::as_integer(aLStack136);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar14,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)local_140,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)local_140);
    lib::L2CValue::_L2CValue((L2CValue *)local_140);
    lib::L2CValue::_L2CValue(aLStack136);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)local_140,false);
      bVar1 = lib::L2CValue::as_bool((L2CValue *)local_140);
      app::lua_bind::AttackModule__sleep_impl(*ppBVar14,(bool)(bVar1 & 1));
      lib::L2CValue::_L2CValue((L2CValue *)local_140);
      lib::L2CValue::L2CValue
                ((L2CValue *)local_140,_WEAPON_TANTAN_BEAM_INSTANCE_WORK_ID_FLAG_INIT_ATTACK_SLEEP);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)local_140);
      app::lua_bind::WorkModule__off_flag_impl(*ppBVar14,iVar4);
      lib::L2CValue::_L2CValue((L2CValue *)local_140);
    }
    lib::L2CValue::L2CValue((L2CValue *)auStack352,0xa03909c6b);
    lib::L2CValue::L2CValue(aLStack368,0x1516f52c7e);
    uVar7 = lib::L2CValue::as_integer((L2CValue *)auStack352);
    uVar13 = lib::L2CValue::as_integer(aLStack368);
    fVar15 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar14,uVar7,uVar13);
    lib::L2CValue::L2CValue((L2CValue *)local_140,fVar15);
    fVar15 = (float)app::lua_bind::PostureModule__scale_impl(*ppBVar14);
    lib::L2CValue::L2CValue(aLStack384,fVar15);
    lib::L2CValue::operator_((L2CValue *)local_140,aLStack384);
    lib::L2CValue::_L2CValue(aLStack384);
    lib::L2CValue::_L2CValue((L2CValue *)local_140);
    lib::L2CValue::_L2CValue(aLStack368);
    lib::L2CValue::_L2CValue((L2CValue *)auStack352);
    lib::L2CValue::L2CValue((L2CValue *)auStack352,_WEAPON_TANTAN_BEAM_STATUS_WORK_ID_FLOAT_LENGTH);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack352);
    fVar15 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar14,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)local_140,fVar15);
    uVar7 = lib::L2CValue::operator_((L2CValue *)local_140,aLStack136);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::_L2CValue((L2CValue *)local_140);
      lib::L2CValue::_L2CValue((L2CValue *)auStack352);
LAB_710000dadc:
      lib::L2CValue::L2CValue((L2CValue *)local_140,_WEAPON_TANTAN_BEAM_STATUS_WORK_ID_FLOAT_LENGTH)
      ;
      iVar4 = lib::L2CValue::as_integer((L2CValue *)local_140);
      fVar15 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar14,iVar4);
      lib::L2CValue::L2CValue((L2CValue *)auStack352,fVar15);
      lib::L2CValue::_L2CValue((L2CValue *)local_140);
      lib::L2CValue::L2CValue((L2CValue *)local_140,0.0);
      uVar7 = lib::L2CValue::operator__((L2CValue *)auStack352,(L2CValue *)local_140);
      lib::L2CValue::_L2CValue((L2CValue *)local_140);
      if ((uVar7 & 1) == 0) {
        fVar15 = (float)app::lua_bind::PostureModule__scale_impl(*ppBVar14);
        lib::L2CValue::L2CValue(aLStack368,fVar15);
        lib::L2CValue::operator_((L2CValue *)auStack352,aLStack368);
        lib::L2CValue::operator_((L2CValue *)auStack352,(L2CValue *)local_140);
        lib::L2CValue::_L2CValue((L2CValue *)local_140);
        lib::L2CValue::_L2CValue(aLStack368);
      }
      lib::L2CValue::L2CValue(aLStack368,0);
      lib::L2CValue::L2CValue(aLStack384,0.0);
      lib::L2CValue::L2CValue(aLStack400,0.0);
      iVar4 = lib::L2CValue::as_integer(aLStack368);
      uVar7 = lib::L2CValue::as_number(aLStack384);
      lVar19 = lib::L2CValue::as_number(aLStack400);
      uVar16 = lib::L2CValue::as_number((L2CValue *)auStack352);
      local_140._0_8_ = (void **)(uVar7 & 0xffffffff | lVar19 << 0x20);
      local_140._8_8_ = (lua_State *)(ulong)uVar16;
      bVar1 = app::lua_bind::AttackModule__set_offset2_impl(*ppBVar14,iVar4,(Vector3f *)local_140);
      lib::L2CValue::L2CValue(aLStack480,(bool)(bVar1 & 1));
      lib::L2CValue::_L2CValue(aLStack480);
      lib::L2CValue::_L2CValue(aLStack400);
      lib::L2CValue::_L2CValue(aLStack384);
      lib::L2CValue::_L2CValue(aLStack368);
      lib::L2CValue::L2CValue
                ((L2CValue *)local_140,_WEAPON_TANTAN_BEAM_INSTANCE_WORK_ID_FLOAT_TIP_POS_X);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)local_140);
      fVar15 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar14,iVar4);
      lib::L2CValue::L2CValue(aLStack496,fVar15);
      lib::L2CValue::L2CValue(aLStack384,_WEAPON_TANTAN_BEAM_INSTANCE_WORK_ID_FLOAT_TIP_POS_Y);
      iVar4 = lib::L2CValue::as_integer(aLStack384);
      fVar15 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar14,iVar4);
      lib::L2CValue::L2CValue(aLStack512,fVar15);
      lib::L2CValue::L2CValue(aLStack400,_WEAPON_TANTAN_BEAM_INSTANCE_WORK_ID_FLOAT_TIP_POS_Z);
      iVar4 = lib::L2CValue::as_integer(aLStack400);
      fVar15 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar14,iVar4);
      lib::L2CValue::L2CValue(aLStack528,fVar15);
      lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0x10,(L2CValue)0x0,(L2CValue)0xf0);
      lib::L2CValue::_L2CValue(aLStack528);
      lib::L2CValue::_L2CValue(aLStack400);
      lib::L2CValue::_L2CValue(aLStack512);
      lib::L2CValue::_L2CValue(aLStack384);
      lib::L2CValue::_L2CValue(aLStack496);
      lib::L2CValue::_L2CValue((L2CValue *)local_140);
      lib::L2CValue::L2CValue
                ((L2CValue *)local_140,
                 _WEAPON_TANTAN_BEAM_INSTANCE_WORK_ID_INT_BEAM_TIP_BASE_EFFECT_HANDLE);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)local_140);
      iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar14,iVar4);
      lib::L2CValue::L2CValue(aLStack384,iVar4);
      lib::L2CValue::_L2CValue((L2CValue *)local_140);
      lib::L2CValue::L2CValue((L2CValue *)local_140,_EFFECT_HANDLE_NULL);
      uVar7 = lib::L2CValue::operator__(aLStack384,(L2CValue *)local_140);
      lib::L2CValue::_L2CValue((L2CValue *)local_140);
      if ((uVar7 & 1) == 0) {
        pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack368,0x18cdc1683);
        pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack368,0x1fbdb2615);
        pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack368,0x162d277af);
        uVar16 = lib::L2CValue::as_integer(aLStack384);
        uVar7 = lib::L2CValue::as_number(pLVar11);
        lVar19 = lib::L2CValue::as_number(pLVar8);
        uVar17 = lib::L2CValue::as_number(pLVar9);
        local_140._0_8_ = (void **)(uVar7 & 0xffffffff | lVar19 << 0x20);
        local_140._8_8_ = (lua_State *)(ulong)uVar17;
        app::lua_bind::EffectModule__set_pos_impl(*ppBVar14,uVar16,(Vector3f *)local_140);
      }
      lib::L2CValue::L2CValue
                ((L2CValue *)local_140,
                 _WEAPON_TANTAN_BEAM_INSTANCE_WORK_ID_INT_BEAM_TIP_ADD_EFFECT_HANDLE);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)local_140);
      iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar14,iVar4);
      lib::L2CValue::L2CValue(aLStack400,iVar4);
      lib::L2CValue::_L2CValue((L2CValue *)local_140);
      lib::L2CValue::L2CValue((L2CValue *)local_140,_EFFECT_HANDLE_NULL);
      uVar7 = lib::L2CValue::operator__(aLStack400,(L2CValue *)local_140);
      lib::L2CValue::_L2CValue((L2CValue *)local_140);
      if ((uVar7 & 1) == 0) {
        pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack368,0x18cdc1683);
        pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack368,0x1fbdb2615);
        pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack368,0x162d277af);
        uVar16 = lib::L2CValue::as_integer(aLStack400);
        uVar7 = lib::L2CValue::as_number(pLVar11);
        lVar19 = lib::L2CValue::as_number(pLVar8);
        uVar17 = lib::L2CValue::as_number(pLVar9);
        local_140._0_8_ = (void **)(uVar7 & 0xffffffff | lVar19 << 0x20);
        local_140._8_8_ = (lua_State *)(ulong)uVar17;
        app::lua_bind::EffectModule__set_pos_impl(*ppBVar14,uVar16,(Vector3f *)local_140);
      }
      lib::L2CValue::_L2CValue(aLStack400);
      lib::L2CValue::_L2CValue(aLStack384);
      lib::L2CValue::_L2CValue(aLStack368);
      pLVar11 = (L2CValue *)auStack352;
    }
    else {
      lib::L2CValue::L2CValue(aLStack384,_WEAPON_TANTAN_BEAM_STATUS_WORK_ID_FLAG_HIT_GROUND);
      iVar4 = lib::L2CValue::as_integer(aLStack384);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar14,iVar4);
      lib::L2CValue::L2CValue(aLStack368,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack368);
      lib::L2CValue::_L2CValue(aLStack368);
      lib::L2CValue::_L2CValue(aLStack384);
      lib::L2CValue::_L2CValue((L2CValue *)local_140);
      lib::L2CValue::_L2CValue((L2CValue *)auStack352);
      if ((bVar2 & 1U) == 0) goto LAB_710000dadc;
      lib::L2CValue::L2CValue((L2CValue *)local_140,true);
      bVar1 = lib::L2CValue::as_bool((L2CValue *)local_140);
      app::lua_bind::AttackModule__sleep_impl(*ppBVar14,(bool)(bVar1 & 1));
      pLVar11 = (L2CValue *)local_140;
    }
    lib::L2CValue::_L2CValue(pLVar11);
    lib::L2CValue::L2CValue
              ((L2CValue *)local_140,_WEAPON_TANTAN_BEAM_INSTANCE_WORK_ID_INT_BEAM_EFFECT_HANDLE);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)local_140);
    iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar14,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)auStack352,iVar4);
    lib::L2CValue::_L2CValue((L2CValue *)local_140);
    lib::L2CValue::L2CValue((L2CValue *)local_140,_EFFECT_HANDLE_NULL);
    uVar7 = lib::L2CValue::operator__((L2CValue *)auStack352,(L2CValue *)local_140);
    lib::L2CValue::_L2CValue((L2CValue *)local_140);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)local_140,_WEAPON_TANTAN_BEAM_STATUS_WORK_ID_FLOAT_LENGTH)
      ;
      iVar4 = lib::L2CValue::as_integer((L2CValue *)local_140);
      fVar15 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar14,iVar4);
      lib::L2CValue::L2CValue(aLStack368,fVar15);
      lib::L2CValue::_L2CValue((L2CValue *)local_140);
      lib::L2CValue::L2CValue(aLStack384,0.0);
      lib::L2CValue::L2CValue((L2CValue *)local_140,0.0);
      uVar7 = lib::L2CValue::operator_((L2CValue *)local_140,aLStack368);
      lib::L2CValue::_L2CValue((L2CValue *)local_140);
      if ((uVar7 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack560,0xa03909c6b);
        lib::L2CValue::L2CValue(aLStack576,0xa7d7d1fb5);
        uVar7 = lib::L2CValue::as_integer(aLStack560);
        uVar13 = lib::L2CValue::as_integer(aLStack576);
        fVar15 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar14,uVar7,uVar13);
        lib::L2CValue::L2CValue(aLStack544,fVar15);
        fVar15 = (float)app::lua_bind::PostureModule__scale_impl(*ppBVar14);
        lib::L2CValue::L2CValue(aLStack592,fVar15);
        lib::L2CValue::operator_(aLStack544,aLStack592);
        lib::L2CValue::operator_(aLStack368,aLStack400);
        lib::L2CValue::operator_(aLStack384,(L2CValue *)local_140);
        lib::L2CValue::_L2CValue((L2CValue *)local_140);
        lib::L2CValue::_L2CValue(aLStack400);
        lib::L2CValue::_L2CValue(aLStack592);
        lib::L2CValue::_L2CValue(aLStack544);
        lib::L2CValue::_L2CValue(aLStack576);
        lib::L2CValue::_L2CValue(aLStack560);
      }
      lib::L2CValue::L2CValue(aLStack544,0xa03909c6b);
      lib::L2CValue::L2CValue(aLStack560,0x1a75dba456);
      uVar7 = lib::L2CValue::as_integer(aLStack544);
      uVar13 = lib::L2CValue::as_integer(aLStack560);
      fVar15 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar14,uVar7,uVar13);
      lib::L2CValue::L2CValue(aLStack400,fVar15);
      lib::L2CValue::operator_(aLStack384,aLStack400);
      lib::L2CValue::operator_(aLStack384,(L2CValue *)local_140);
      lib::L2CValue::_L2CValue((L2CValue *)local_140);
      lib::L2CValue::_L2CValue(aLStack400);
      lib::L2CValue::_L2CValue(aLStack560);
      lib::L2CValue::_L2CValue(aLStack544);
      lib::L2CValue::L2CValue((L2CValue *)local_140,0.0);
      uVar7 = lib::L2CValue::operator_(aLStack384,(L2CValue *)local_140);
      lib::L2CValue::_L2CValue((L2CValue *)local_140);
      if ((uVar7 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)local_140,0.0);
        lib::L2CValue::operator_(aLStack384,(L2CValue *)local_140);
        lib::L2CValue::_L2CValue((L2CValue *)local_140);
      }
      lib::L2CValue::L2CValue(aLStack400,0.0);
      uVar16 = lib::L2CValue::as_integer((L2CValue *)auStack352);
      uVar7 = lib::L2CValue::as_number(aLStack400);
      uVar17 = lib::L2CValue::as_number(aLStack384);
      local_140._0_8_ = (void **)(uVar7 & 0xffffffff | (ulong)uVar17 << 0x20);
      local_140._8_8_ = (lua_State *)0x0;
      app::lua_bind::EffectModule__set_custom_uv_offset_impl
                (*ppBVar14,uVar16,(Vector2f *)local_140,0);
      lib::L2CValue::_L2CValue(aLStack400);
      lib::L2CValue::_L2CValue(aLStack384);
      lib::L2CValue::_L2CValue(aLStack368);
    }
    lib::L2CValue::L2CValue(aLStack368,_WEAPON_TANTAN_BEAM_STATUS_WORK_ID_FLAG_HIT_GROUND);
    iVar4 = lib::L2CValue::as_integer(aLStack368);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar14,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)local_140,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)local_140);
    lib::L2CValue::_L2CValue((L2CValue *)local_140);
    lib::L2CValue::_L2CValue(aLStack368);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue
                ((L2CValue *)local_140,
                 _WEAPON_TANTAN_BEAM_INSTANCE_WORK_ID_INT_BEAM_NEST_BASE_EFFECT_HANDLE);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)local_140);
      iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar14,iVar4);
      lib::L2CValue::L2CValue(aLStack368,iVar4);
      lib::L2CValue::_L2CValue((L2CValue *)local_140);
      lib::L2CValue::L2CValue((L2CValue *)local_140,_EFFECT_HANDLE_NULL);
      uVar7 = lib::L2CValue::operator__(aLStack368,(L2CValue *)local_140);
      lib::L2CValue::_L2CValue((L2CValue *)local_140);
      if ((uVar7 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)local_140,true);
        lib::L2CValue::L2CValue(aLStack384,true);
        uVar16 = lib::L2CValue::as_integer(aLStack368);
        bVar1 = lib::L2CValue::as_bool((L2CValue *)local_140);
        bVar3 = lib::L2CValue::as_bool(aLStack384);
        app::lua_bind::EffectModule__kill_impl(*ppBVar14,uVar16,(bool)(bVar1 & 1),(bool)(bVar3 & 1))
        ;
        lib::L2CValue::_L2CValue(aLStack384);
        lib::L2CValue::_L2CValue((L2CValue *)local_140);
        lib::L2CValue::L2CValue((L2CValue *)local_140,_EFFECT_HANDLE_NULL);
        lib::L2CValue::L2CValue
                  (aLStack384,_WEAPON_TANTAN_BEAM_INSTANCE_WORK_ID_INT_BEAM_NEST_BASE_EFFECT_HANDLE)
        ;
        iVar4 = lib::L2CValue::as_integer((L2CValue *)local_140);
        iVar5 = lib::L2CValue::as_integer(aLStack384);
        app::lua_bind::WorkModule__set_int_impl(*ppBVar14,iVar4,iVar5);
        lib::L2CValue::_L2CValue(aLStack384);
        lib::L2CValue::_L2CValue((L2CValue *)local_140);
      }
      lib::L2CValue::L2CValue
                ((L2CValue *)local_140,
                 _WEAPON_TANTAN_BEAM_INSTANCE_WORK_ID_INT_BEAM_NEST_ADD_EFFECT_HANDLE);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)local_140);
      iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar14,iVar4);
      lib::L2CValue::L2CValue(aLStack384,iVar4);
      lib::L2CValue::_L2CValue((L2CValue *)local_140);
      lib::L2CValue::L2CValue((L2CValue *)local_140,_EFFECT_HANDLE_NULL);
      uVar7 = lib::L2CValue::operator__(aLStack384,(L2CValue *)local_140);
      lib::L2CValue::_L2CValue((L2CValue *)local_140);
      if ((uVar7 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)local_140,true);
        lib::L2CValue::L2CValue(aLStack400,true);
        uVar16 = lib::L2CValue::as_integer(aLStack384);
        bVar1 = lib::L2CValue::as_bool((L2CValue *)local_140);
        bVar3 = lib::L2CValue::as_bool(aLStack400);
        app::lua_bind::EffectModule__kill_impl(*ppBVar14,uVar16,(bool)(bVar1 & 1),(bool)(bVar3 & 1))
        ;
        lib::L2CValue::_L2CValue(aLStack400);
        lib::L2CValue::_L2CValue((L2CValue *)local_140);
        lib::L2CValue::L2CValue((L2CValue *)local_140,_EFFECT_HANDLE_NULL);
        lib::L2CValue::L2CValue
                  (aLStack400,_WEAPON_TANTAN_BEAM_INSTANCE_WORK_ID_INT_BEAM_NEST_ADD_EFFECT_HANDLE);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)local_140);
        iVar5 = lib::L2CValue::as_integer(aLStack400);
        app::lua_bind::WorkModule__set_int_impl(*ppBVar14,iVar4,iVar5);
        lib::L2CValue::_L2CValue(aLStack400);
        lib::L2CValue::_L2CValue((L2CValue *)local_140);
      }
      lib::L2CValue::_L2CValue(aLStack384);
      lib::L2CValue::_L2CValue(aLStack368);
    }
    lib::L2CValue::_L2CValue((L2CValue *)auStack352);
    lib::L2CValue::_L2CValue(aLStack136);
    pLVar11 = (L2CValue *)(auStack352 + 0x10);
  }
  lib::L2CValue::_L2CValue(pLVar11);
  lib::L2CValue::_L2CValue(aLStack216);
LAB_710000e474:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack152);
  return;
}

