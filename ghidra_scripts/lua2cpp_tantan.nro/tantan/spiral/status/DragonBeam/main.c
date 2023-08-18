
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponTantanSpiral::status::DragonBeam_main(L2CWeaponTantanSpiral *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  L2CValue *pLVar5;
  L2CValue *pLVar6;
  L2CValue *pLVar7;
  Hash40 HVar8;
  float *pfVar9;
  L2CValue *pLVar10;
  L2CValue *pLVar11;
  L2CValue *pLVar12;
  BattleObjectModuleAccessor **ppBVar13;
  float fVar14;
  uint uVar15;
  undefined8 uVar16;
  ulong uVar17;
  long lVar18;
  L2CValue aLStack496 [16];
  L2CValue aLStack480 [16];
  L2CValue aLStack464 [16];
  L2CValue aLStack448 [16];
  L2CValue aLStack432 [16];
  L2CValue aLStack416 [16];
  L2CValue aLStack400 [16];
  L2CValue aLStack384 [16];
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  undefined8 local_e0;
  ulong uStack216;
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  ulong local_a0;
  ulong uStack152;
  undefined8 local_90;
  ulong uStack136;
  
  lib::L2CValue::L2CValue((L2CValue *)&local_90,_WEAPON_TANTAN_SPIRALLEFT_GENERATE_ARTICLE_PUNCH1);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_90);
  ppBVar13 = &this->moduleAccessor;
  bVar1 = app::lua_bind::ArticleModule__is_exist_impl(*ppBVar13,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_e0,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_e0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_e0,_WEAPON_TANTAN_SPIRALLEFT_GENERATE_ARTICLE_PUNCH1)
    ;
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_90,_WEAPON_TANTAN_PUNCH1_STATUS_KIND_DRAGON_BEAM_READY);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_e0);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_90);
    app::lua_bind::ArticleModule__change_status_impl(*ppBVar13,iVar3,iVar4,0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
  }
  lib::L2CValue::L2CValue(aLStack384,0.0);
  lib::L2CValue::L2CValue(aLStack400,0.0);
  fVar14 = 0.0;
  lib::L2CValue::L2CValue(aLStack416,0.0);
  lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0x80,(L2CValue)0x70,(L2CValue)0x60);
  lib::L2CValue::_L2CValue(aLStack416);
  lib::L2CValue::_L2CValue(aLStack400);
  lib::L2CValue::_L2CValue(aLStack384);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,_WEAPON_LINK_NO_CONSTRAINT);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_90);
  bVar1 = app::lua_bind::LinkModule__is_link_impl(*ppBVar13,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_e0,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_e0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  if ((bVar2 & 1U) == 0) {
    pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack368,0x18cdc1683);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack368,0x1fbdb2615);
    pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack368,0x162d277af);
    lib::L2CValue::L2CValue((L2CValue *)&local_a0,0x4d27eea40);
    pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack368,0x18cdc1683);
    pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack368,0x1fbdb2615);
    pLVar12 = (L2CValue *)lib::L2CValue::operator__(aLStack368,0x162d277af);
    lib::L2CValue::L2CValue(aLStack176,false);
    HVar8 = lib::L2CValue::as_hash((L2CValue *)&local_a0);
    uVar17 = lib::L2CValue::as_number(pLVar10);
    lVar18 = lib::L2CValue::as_number(pLVar11);
    uVar15 = lib::L2CValue::as_number(pLVar12);
    local_90 = uVar17 & 0xffffffff | lVar18 << 0x20;
    uStack136 = (ulong)uVar15;
    bVar1 = lib::L2CValue::as_bool(aLStack176);
    app::lua_bind::ModelModule__joint_global_position_impl
              (*ppBVar13,HVar8,(Vector3f *)&local_90,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue((L2CValue *)&local_e0,(float)local_90);
    lib::L2CValue::L2CValue(aLStack208,local_90._4_4_);
    lib::L2CValue::L2CValue(aLStack192,(float)uStack136);
    lib::L2CValue::operator_(pLVar5,(L2CValue *)&local_e0);
    lib::L2CValue::operator_(pLVar6,aLStack208);
    lib::L2CValue::operator_(pLVar7,aLStack192);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
    lib::L2CValue::_L2CValue(aLStack176);
    lVar18 = -0x90;
  }
  else {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_90,_WEAPON_TANTAN_SPIRALLEFT_INSTANCE_WORK_ID_FLAG_IS_LEFT);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_90);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar13,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_e0,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_e0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    if ((bVar2 & 1U) == 0) {
      pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack368,0x18cdc1683);
      pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack368,0x1fbdb2615);
      pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack368,0x162d277af);
      lib::L2CValue::L2CValue((L2CValue *)&local_90,_WEAPON_LINK_NO_CONSTRAINT);
      lib::L2CValue::L2CValue((L2CValue *)&local_a0,0xaaa0a8627);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_90);
      HVar8 = lib::L2CValue::as_hash((L2CValue *)&local_a0);
      uVar16 = app::lua_bind::LinkModule__get_parent_model_joint_global_position_impl
                         (*ppBVar13,iVar3,HVar8,false);
      lib::L2CValue::L2CValue((L2CValue *)&local_e0,(float)uVar16);
      lib::L2CValue::L2CValue(aLStack208,(float)((ulong)uVar16 >> 0x20));
      lib::L2CValue::L2CValue(aLStack192,fVar14);
      lib::L2CValue::operator_(pLVar5,(L2CValue *)&local_e0);
      lib::L2CValue::operator_(pLVar6,aLStack208);
      lib::L2CValue::operator_(pLVar7,aLStack192);
    }
    else {
      pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack368,0x18cdc1683);
      pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack368,0x1fbdb2615);
      pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack368,0x162d277af);
      lib::L2CValue::L2CValue((L2CValue *)&local_90,_WEAPON_LINK_NO_CONSTRAINT);
      lib::L2CValue::L2CValue((L2CValue *)&local_a0,0xa7e4bb9f8);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_90);
      HVar8 = lib::L2CValue::as_hash((L2CValue *)&local_a0);
      uVar16 = app::lua_bind::LinkModule__get_parent_model_joint_global_position_impl
                         (*ppBVar13,iVar3,HVar8,false);
      lib::L2CValue::L2CValue((L2CValue *)&local_e0,(float)uVar16);
      lib::L2CValue::L2CValue(aLStack208,(float)((ulong)uVar16 >> 0x20));
      lib::L2CValue::L2CValue(aLStack192,fVar14);
      lib::L2CValue::operator_(pLVar5,(L2CValue *)&local_e0);
      lib::L2CValue::operator_(pLVar6,aLStack208);
      lib::L2CValue::operator_(pLVar7,aLStack192);
    }
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
    lVar18 = -0x80;
  }
  lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar18));
  pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack368,0x18cdc1683);
  lib::L2CValue::L2CValue((L2CValue *)&local_e0,0.0);
  lib::L2CValue::operator_(pLVar5,(L2CValue *)&local_e0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_e0,_WEAPON_TANTAN_SPIRALLEFT_STATUS_DRAGON_WORK_ID_FLOAT_NEST_POS_X)
  ;
  fVar14 = (float)lib::L2CValue::as_number((L2CValue *)&local_90);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_e0);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar13,fVar14,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack368,0x1fbdb2615);
  lib::L2CValue::L2CValue((L2CValue *)&local_e0,0.0);
  lib::L2CValue::operator_(pLVar5,(L2CValue *)&local_e0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_e0,_WEAPON_TANTAN_SPIRALLEFT_STATUS_DRAGON_WORK_ID_FLOAT_NEST_POS_Y)
  ;
  fVar14 = (float)lib::L2CValue::as_number((L2CValue *)&local_90);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_e0);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar13,fVar14,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack368,0x162d277af);
  lib::L2CValue::L2CValue((L2CValue *)&local_e0,0.0);
  lib::L2CValue::operator_(pLVar5,(L2CValue *)&local_e0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_e0,_WEAPON_TANTAN_SPIRALLEFT_STATUS_DRAGON_WORK_ID_FLOAT_NEST_POS_Z)
  ;
  fVar14 = (float)lib::L2CValue::as_number((L2CValue *)&local_90);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_e0);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar13,fVar14,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,0x42762428f);
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,0);
  lib::L2CValue::L2CValue(aLStack176,0);
  lib::L2CValue::L2CValue(aLStack240,0);
  lib::L2CValue::L2CValue(aLStack256,false);
  HVar8 = lib::L2CValue::as_hash((L2CValue *)&local_90);
  uVar17 = lib::L2CValue::as_number((L2CValue *)&local_a0);
  lVar18 = lib::L2CValue::as_number(aLStack176);
  uVar15 = lib::L2CValue::as_number(aLStack240);
  local_e0 = uVar17 & 0xffffffff | lVar18 << 0x20;
  uStack216 = (ulong)uVar15;
  bVar1 = lib::L2CValue::as_bool(aLStack256);
  app::lua_bind::ModelModule__joint_global_position_impl
            (*ppBVar13,HVar8,(Vector3f *)&local_e0,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack480,(float)local_e0);
  lib::L2CValue::L2CValue(aLStack464,local_e0._4_4_);
  lib::L2CValue::L2CValue(aLStack448,(float)uStack216);
  FUN_710000eb70(aLStack432,this,aLStack480);
  lib::L2CValue::_L2CValue(aLStack448);
  lib::L2CValue::_L2CValue(aLStack464);
  lib::L2CValue::_L2CValue(aLStack480);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack432,0x18cdc1683);
  lib::L2CValue::L2CValue((L2CValue *)&local_e0,0.0);
  lib::L2CValue::operator_(pLVar5,(L2CValue *)&local_e0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_e0,_WEAPON_TANTAN_SPIRALLEFT_STATUS_DRAGON_WORK_ID_FLOAT_TIP_POS_X);
  fVar14 = (float)lib::L2CValue::as_number((L2CValue *)&local_90);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_e0);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar13,fVar14,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack432,0x1fbdb2615);
  lib::L2CValue::L2CValue((L2CValue *)&local_e0,0.0);
  lib::L2CValue::operator_(pLVar5,(L2CValue *)&local_e0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_e0,_WEAPON_TANTAN_SPIRALLEFT_STATUS_DRAGON_WORK_ID_FLOAT_TIP_POS_Y);
  fVar14 = (float)lib::L2CValue::as_number((L2CValue *)&local_90);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_e0);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar13,fVar14,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  FUN_7100094dc0(this);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_e0,
             _WEAPON_TANTAN_SPIRALLEFT_STATUS_DRAGON_WORK_ID_FLAG_INIT_ROTATE_Z);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_e0);
  app::lua_bind::WorkModule__on_flag_impl(*ppBVar13,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
  pfVar9 = (float *)app::lua_bind::PostureModule__pos_impl(*ppBVar13);
  lib::L2CValue::L2CValue((L2CValue *)&local_e0,*pfVar9);
  lib::L2CValue::L2CValue(aLStack208,pfVar9[1]);
  lib::L2CValue::L2CValue(aLStack192,pfVar9[2]);
  FUN_710000eb70(aLStack176,this,&local_e0);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
  lib::L2CValue::L2CValue(aLStack256,0.0);
  lib::L2CValue::L2CValue(aLStack272,0.0);
  lib::L2CValue::L2CValue(aLStack288,0.0);
  lua2cpp::L2CFighterBase::Vector3__create
            (this,(L2CValue)((char)&stack0xfffffffffffffff0 + '\x10'),(L2CValue)0xf0,(L2CValue)0xe0)
  ;
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_a0,_WEAPON_TANTAN_SPIRALLEFT_STATUS_DRAGON_WORK_ID_FLOAT_NEST_POS_X)
  ;
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
  fVar14 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar13,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,fVar14);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x18cdc1683);
  lib::L2CValue::operator_(pLVar5,(L2CValue *)&local_90);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_a0,_WEAPON_TANTAN_SPIRALLEFT_STATUS_DRAGON_WORK_ID_FLOAT_NEST_POS_Y)
  ;
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
  fVar14 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar13,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,fVar14);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x1fbdb2615);
  lib::L2CValue::operator_(pLVar5,(L2CValue *)&local_90);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_a0,_WEAPON_TANTAN_SPIRALLEFT_STATUS_DRAGON_WORK_ID_FLOAT_NEST_POS_Z)
  ;
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
  fVar14 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar13,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,fVar14);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x162d277af);
  lib::L2CValue::operator_(pLVar5,(L2CValue *)&local_90);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
  lib::L2CValue::L2CValue(aLStack320,0.0);
  lib::L2CValue::L2CValue(aLStack336,0.0);
  lib::L2CValue::L2CValue(aLStack352,0.0);
  lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0xc0,(L2CValue)0xb0,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue(aLStack352);
  lib::L2CValue::_L2CValue(aLStack336);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_a0,_WEAPON_TANTAN_SPIRALLEFT_STATUS_DRAGON_WORK_ID_FLOAT_TIP_POS_X);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
  fVar14 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar13,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,fVar14);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack304,0x18cdc1683);
  lib::L2CValue::operator_(pLVar5,(L2CValue *)&local_90);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_a0,_WEAPON_TANTAN_SPIRALLEFT_STATUS_DRAGON_WORK_ID_FLOAT_TIP_POS_Y);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
  fVar14 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar13,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,fVar14);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack304,0x1fbdb2615);
  lib::L2CValue::operator_(pLVar5,(L2CValue *)&local_90);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x162d277af);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack304,0x162d277af);
  lib::L2CValue::operator_(pLVar6,pLVar5);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x18cdc1683);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x1fbdb2615);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x162d277af);
  pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack304,0x18cdc1683);
  pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack304,0x1fbdb2615);
  pLVar12 = (L2CValue *)lib::L2CValue::operator__(aLStack304,0x162d277af);
  uVar17 = lib::L2CValue::as_number(pLVar5);
  lVar18 = lib::L2CValue::as_number(pLVar6);
  uVar15 = lib::L2CValue::as_number(pLVar7);
  local_90 = uVar17 & 0xffffffff | lVar18 << 0x20;
  uStack136 = (ulong)uVar15;
  uVar17 = lib::L2CValue::as_number(pLVar10);
  lVar18 = lib::L2CValue::as_number(pLVar11);
  uVar15 = lib::L2CValue::as_number(pLVar12);
  local_a0 = uVar17 & 0xffffffff | lVar18 << 0x20;
  uStack152 = (ulong)uVar15;
  app::lua_bind::PhysicsModule__set_2nd_end_pos_impl
            (*ppBVar13,(Vector3f *)&local_90,(Vector3f *)&local_a0);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::L2CValue((L2CValue *)&local_e0,_WEAPON_LINK_NO_CONSTRAINT);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,0x2490ab072f);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_e0);
  HVar8 = lib::L2CValue::as_hash((L2CValue *)&local_90);
  app::lua_bind::LinkModule__send_event_parents_impl(*ppBVar13,iVar3,HVar8);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
  lib::L2CValue::L2CValue(aLStack496,&DAT_7100095170);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0x10);
  lib::L2CValue::_L2CValue(aLStack496);
  lib::L2CValue::_L2CValue(aLStack432);
  lib::L2CValue::_L2CValue(aLStack368);
  return;
}

