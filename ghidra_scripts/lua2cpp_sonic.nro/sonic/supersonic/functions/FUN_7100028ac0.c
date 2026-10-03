
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100028ac0(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                   L2CAgent *param_5,L2CValue *param_6)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  float *pfVar7;
  Hash40 HVar8;
  L2CValue *pLVar9;
  L2CValue *pLVar10;
  ulong *puVar11;
  L2CValue *pLVar12;
  L2CValue *pLVar13;
  BattleObjectModuleAccessor **ppBVar14;
  undefined4 uVar15;
  float fVar16;
  uint uVar17;
  float fVar18;
  float fVar19;
  long lVar20;
  undefined8 uVar21;
  L2CValue aLStack656 [16];
  L2CValue aLStack640 [16];
  L2CValue aLStack624 [16];
  L2CValue aLStack608 [16];
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
  ulong local_190;
  ulong uStack392;
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
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  undefined auStack192 [32];
  L2CValue aLStack160 [16];
  ulong auStack144 [2];
  L2CValue aLStack128 [16];
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack100;
  
  uVar15 = app::sv_camera_manager::camera_range();
  local_190 = CONCAT44(param_2,uVar15);
  uStack392 = CONCAT44(param_4,param_3);
  app::lua_bind::lib__Rect__store_l2c_table_impl((Rect *)&local_190);
  lib::L2CValue::L2CValue(aLStack128,0x102643cb05);
  lib::L2CValue::L2CValue((L2CValue *)auStack144,0x125dff5764);
  uVar4 = lib::L2CValue::as_integer(aLStack128);
  uVar5 = lib::L2CValue::as_integer((L2CValue *)auStack144);
  ppBVar14 = &param_5->moduleAccessor;
  fVar16 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar14,uVar4,uVar5);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar16);
  lib::L2CValue::L2CValue((L2CValue *)&local_190,10.0);
  lib::L2CValue::operator*((L2CValue *)&local_70,(L2CValue *)&local_190);
  lib::L2CValue::~L2CValue((L2CValue *)&local_190);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  lib::L2CValue::~L2CValue((L2CValue *)auStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack224,0x5b4ca7514);
  lib::L2CValue::operator+(pLVar6,aLStack240);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack224,0x5b4ca7514);
  lib::L2CValue::operator=(pLVar6,(L2CValue *)&local_190);
  lib::L2CValue::~L2CValue((L2CValue *)&local_190);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack224,0x47a67e768);
  lib::L2CValue::operator-(pLVar6,aLStack240);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack224,0x47a67e768);
  lib::L2CValue::operator=(pLVar6,(L2CValue *)&local_190);
  lib::L2CValue::~L2CValue((L2CValue *)&local_190);
  pfVar7 = (float *)app::lua_bind::PostureModule__pos_impl(*ppBVar14);
  lib::L2CValue::L2CValue(aLStack304,*pfVar7);
  lib::L2CValue::L2CValue(aLStack288,pfVar7[1]);
  lib::L2CValue::L2CValue(aLStack272,pfVar7[2]);
  FUN_7100028a00(aLStack256,param_5,aLStack304);
  lib::L2CValue::~L2CValue(aLStack272);
  lib::L2CValue::~L2CValue(aLStack288);
  lib::L2CValue::~L2CValue(aLStack304);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack256,0x18cdc1683);
  lib::L2CValue::L2CValue((L2CValue *)&local_190,0.0);
  lib::L2CValue::operator=(pLVar6,(L2CValue *)&local_190);
  lib::L2CValue::~L2CValue((L2CValue *)&local_190);
  lib::L2CValue::L2CValue(aLStack320,false);
  lib::L2CValue::L2CValue(aLStack128,0x66933a7e6);
  HVar8 = lib::L2CValue::as_hash(aLStack128);
  fVar16 = (float)app::sv_math::randf(HVar8,1.0);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar16);
  lib::L2CValue::L2CValue((L2CValue *)&local_190,100.0);
  lib::L2CValue::operator*((L2CValue *)&local_70,(L2CValue *)&local_190);
  lib::L2CValue::~L2CValue((L2CValue *)&local_190);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  lib::L2CValue::~L2CValue(aLStack128);
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_6);
  if ((bVar1 & 1U) == 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_190,_WEAPON_SONIC_SUPERSONIC_KINETIC_ENERGY_ID_GENERAL);
    lib::L2CAgent::clear_lua_stack(param_5);
    lib::L2CAgent::push_lua_stack(param_5,(L2CValue *)&local_190);
    fVar16 = (float)app::sv_kinetic_energy::get_speed_x(param_5->luaStateAgent);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar16);
    lib::L2CValue::~L2CValue((L2CValue *)&local_190);
    lib::L2CValue::L2CValue((L2CValue *)&local_190,0.0);
    uVar4 = lib::L2CValue::operator<((L2CValue *)&local_190,(L2CValue *)&local_70);
    lib::L2CValue::~L2CValue((L2CValue *)&local_190);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_190,false);
      lib::L2CValue::operator=(aLStack320,(L2CValue *)&local_190);
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)&local_190,true);
      lib::L2CValue::operator=(aLStack320,(L2CValue *)&local_190);
    }
    lib::L2CValue::~L2CValue((L2CValue *)&local_190);
    lib::L2CValue::L2CValue((L2CValue *)&local_190,0x102643cb05);
    lib::L2CValue::L2CValue((L2CValue *)auStack144,0x155883be91);
    uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_190);
    uVar5 = lib::L2CValue::as_integer((L2CValue *)auStack144);
    fVar16 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar14,uVar4,uVar5);
    lib::L2CValue::L2CValue(aLStack128,fVar16);
    lib::L2CValue::~L2CValue((L2CValue *)auStack144);
    lib::L2CValue::~L2CValue((L2CValue *)&local_190);
    uVar4 = lib::L2CValue::operator<(aLStack336,aLStack128);
    if ((uVar4 & 1) != 0) {
      bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack320);
      if ((bVar1 & 1U) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_190,true);
        lib::L2CValue::operator=(aLStack320,(L2CValue *)&local_190);
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)&local_190,false);
        lib::L2CValue::operator=(aLStack320,(L2CValue *)&local_190);
      }
      lib::L2CValue::~L2CValue((L2CValue *)&local_190);
    }
    lib::L2CValue::~L2CValue(aLStack128);
    puVar11 = &local_70;
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_190,50.0);
    uVar4 = lib::L2CValue::operator<(aLStack336,(L2CValue *)&local_190);
    lib::L2CValue::~L2CValue((L2CValue *)&local_190);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_190,false);
      lib::L2CValue::operator=(aLStack320,(L2CValue *)&local_190);
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)&local_190,true);
      lib::L2CValue::operator=(aLStack320,(L2CValue *)&local_190);
    }
    puVar11 = &local_190;
  }
  lib::L2CValue::~L2CValue((L2CValue *)puVar11);
  bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack320);
  if ((bVar1 & 1U) == 0) {
    pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack224,0x47a67e768);
    pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack256,0x18cdc1683);
    lib::L2CValue::operator=(pLVar9,pLVar6);
    lib::L2CValue::L2CValue((L2CValue *)&local_190,1.0);
    fVar16 = (float)lib::L2CValue::as_number((L2CValue *)&local_190);
    app::lua_bind::PostureModule__set_lr_impl(*ppBVar14,fVar16);
  }
  else {
    pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack224,0x5b4ca7514);
    pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack256,0x18cdc1683);
    lib::L2CValue::operator=(pLVar9,pLVar6);
    lib::L2CValue::L2CValue((L2CValue *)&local_190,-1.0);
    fVar16 = (float)lib::L2CValue::as_number((L2CValue *)&local_190);
    app::lua_bind::PostureModule__set_lr_impl(*ppBVar14,fVar16);
  }
  lib::L2CValue::~L2CValue((L2CValue *)&local_190);
  app::lua_bind::PostureModule__update_rot_y_lr_impl(*ppBVar14);
  lib::L2CValue::L2CValue(aLStack352);
  lib::L2CValue::L2CValue(aLStack368);
  local_70._0_4_ = app::sv_camera_manager::camera_range();
  local_70._4_4_ = param_2;
  local_68 = param_3;
  uStack100 = param_4;
  app::lua_bind::lib__Rect__store_l2c_table_impl((Rect *)&local_70);
  lib::L2CValue::L2CValue((L2CValue *)(auStack192 + 0x10),0x102643cb05);
  lib::L2CValue::L2CValue((L2CValue *)auStack192,0x169756e5ea);
  uVar4 = lib::L2CValue::as_integer((L2CValue *)(auStack192 + 0x10));
  uVar5 = lib::L2CValue::as_integer((L2CValue *)auStack192);
  fVar16 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar14,uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack160,fVar16);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,10.0);
  lib::L2CValue::operator*(aLStack160,(L2CValue *)&local_70);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue((L2CValue *)auStack192);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack192 + 0x10));
  lib::L2CValue::L2CValue((L2CValue *)auStack192,0x102643cb05);
  lib::L2CValue::L2CValue(aLStack208,0x16a156bbca);
  uVar4 = lib::L2CValue::as_integer((L2CValue *)auStack192);
  uVar5 = lib::L2CValue::as_integer(aLStack208);
  fVar16 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar14,uVar4,uVar5);
  lib::L2CValue::L2CValue((L2CValue *)(auStack192 + 0x10),fVar16);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,10.0);
  lib::L2CValue::operator*((L2CValue *)(auStack192 + 0x10),(L2CValue *)&local_70);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack192 + 0x10));
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue((L2CValue *)auStack192);
  lib::L2CValue::L2CValue((L2CValue *)(auStack192 + 0x10),0x102643cb05);
  lib::L2CValue::L2CValue((L2CValue *)auStack192,0x1740172b9c);
  uVar4 = lib::L2CValue::as_integer((L2CValue *)(auStack192 + 0x10));
  uVar5 = lib::L2CValue::as_integer((L2CValue *)auStack192);
  fVar16 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar14,uVar4,uVar5);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar16);
  lib::L2CValue::~L2CValue((L2CValue *)auStack192);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack192 + 0x10));
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x31ed91fca);
  pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x6895f72a4);
  lib::L2CValue::operator-(pLVar6,pLVar9);
  lib::L2CValue::operator/((L2CValue *)(auStack192 + 0x10),(L2CValue *)&local_70);
  lib::L2CValue::operator*((L2CValue *)auStack144,aLStack208);
  lib::L2CValue::operator=((L2CValue *)auStack144,(L2CValue *)auStack192);
  lib::L2CValue::~L2CValue((L2CValue *)auStack192);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::operator/((L2CValue *)(auStack192 + 0x10),(L2CValue *)&local_70);
  lib::L2CValue::operator*(aLStack160,aLStack208);
  lib::L2CValue::operator=(aLStack160,(L2CValue *)auStack192);
  lib::L2CValue::~L2CValue((L2CValue *)auStack192);
  lib::L2CValue::~L2CValue(aLStack208);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x31ed91fca);
  lib::L2CValue::operator-(pLVar6,(L2CValue *)auStack144);
  lib::L2CValue::operator=((L2CValue *)auStack144,(L2CValue *)auStack192);
  lib::L2CValue::~L2CValue((L2CValue *)auStack192);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x6895f72a4);
  lib::L2CValue::operator+(pLVar6,aLStack160);
  lib::L2CValue::operator=(aLStack160,(L2CValue *)auStack192);
  lib::L2CValue::~L2CValue((L2CValue *)auStack192);
  lib::L2CValue::L2CValue((L2CValue *)&local_190,(L2CValue *)auStack144);
  lib::L2CValue::L2CValue(aLStack384,aLStack160);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack192 + 0x10));
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue((L2CValue *)auStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::operator=(aLStack352,(L2CValue *)&local_190);
  lib::L2CValue::operator=(aLStack368,aLStack384);
  lib::L2CValue::~L2CValue(aLStack384);
  lib::L2CValue::~L2CValue((L2CValue *)&local_190);
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_6);
  if ((bVar1 & 1U) == 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_190,
               _WEAPON_SONIC_SUPERSONIC_STATUS_FINAL_WORK_FLOAT_RESTART_BASE_Y);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_190);
    fVar16 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar14,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar16);
    lib::L2CValue::~L2CValue((L2CValue *)&local_190);
    lib::L2CValue::L2CValue(aLStack160,0x102643cb05);
    lib::L2CValue::L2CValue((L2CValue *)(auStack192 + 0x10),0x60a782333);
    uVar4 = lib::L2CValue::as_integer(aLStack160);
    uVar5 = lib::L2CValue::as_integer((L2CValue *)(auStack192 + 0x10));
    fVar16 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar14,uVar4,uVar5);
    lib::L2CValue::L2CValue((L2CValue *)auStack144,fVar16);
    lib::L2CValue::L2CValue((L2CValue *)&local_190,10.0);
    lib::L2CValue::operator*((L2CValue *)auStack144,(L2CValue *)&local_190);
    lib::L2CValue::~L2CValue((L2CValue *)&local_190);
    lib::L2CValue::~L2CValue((L2CValue *)auStack144);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack192 + 0x10));
    lib::L2CValue::~L2CValue(aLStack160);
    fVar16 = (float)app::lua_bind::ControlModule__get_stick_y_impl(*ppBVar14);
    lib::L2CValue::L2CValue((L2CValue *)auStack144,fVar16);
    lib::L2CValue::operator*(aLStack128,(L2CValue *)auStack144);
    lib::L2CValue::operator=(aLStack128,(L2CValue *)&local_190);
    lib::L2CValue::~L2CValue((L2CValue *)&local_190);
    lib::L2CValue::operator+((L2CValue *)&local_70,aLStack128);
    lib::L2CValue::operator=((L2CValue *)&local_70,(L2CValue *)&local_190);
    lib::L2CValue::~L2CValue((L2CValue *)&local_190);
    uVar4 = lib::L2CValue::operator<=(aLStack352,(L2CValue *)&local_70);
    if ((uVar4 & 1) == 0) {
      uVar4 = lib::L2CValue::operator<=((L2CValue *)&local_70,aLStack368);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::operator=((L2CValue *)&local_70,aLStack368);
      }
    }
    else {
      lib::L2CValue::operator=((L2CValue *)&local_70,aLStack352);
    }
    pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack256,0x1fbdb2615);
    lib::L2CValue::operator=(pLVar6,(L2CValue *)&local_70);
    lib::L2CValue::L2CValue((L2CValue *)&local_190,0.0);
    lib::L2CValue::operator+((L2CValue *)&local_70,(L2CValue *)&local_190);
    lib::L2CValue::~L2CValue((L2CValue *)&local_190);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_190,
               _WEAPON_SONIC_SUPERSONIC_STATUS_FINAL_WORK_FLOAT_RESTART_BASE_Y);
    fVar16 = (float)lib::L2CValue::as_number(aLStack160);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_190);
    app::lua_bind::WorkModule__set_float_impl(*ppBVar14,fVar16,iVar3);
    lib::L2CValue::~L2CValue((L2CValue *)&local_190);
    lib::L2CValue::~L2CValue(aLStack160);
    puVar11 = auStack144;
  }
  else {
    pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack224,0x6895f72a4);
    pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack224,0x31ed91fca);
    pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack224,0x6895f72a4);
    lib::L2CValue::operator-(pLVar9,pLVar10);
    lib::L2CValue::L2CValue((L2CValue *)&local_190,0.5);
    lib::L2CValue::operator*((L2CValue *)auStack144,(L2CValue *)&local_190);
    lib::L2CValue::~L2CValue((L2CValue *)&local_190);
    lib::L2CValue::operator+(pLVar6,aLStack128);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue((L2CValue *)auStack144);
    pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack256,0x1fbdb2615);
    lib::L2CValue::operator=(pLVar6,(L2CValue *)&local_70);
    pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack256,0x1fbdb2615);
    lib::L2CValue::L2CValue((L2CValue *)&local_190,0.0);
    lib::L2CValue::operator+(pLVar6,(L2CValue *)&local_190);
    lib::L2CValue::~L2CValue((L2CValue *)&local_190);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_190,
               _WEAPON_SONIC_SUPERSONIC_STATUS_FINAL_WORK_FLOAT_RESTART_BASE_Y);
    fVar16 = (float)lib::L2CValue::as_number(aLStack128);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_190);
    app::lua_bind::WorkModule__set_float_impl(*ppBVar14,fVar16,iVar3);
    puVar11 = &local_190;
  }
  lib::L2CValue::~L2CValue((L2CValue *)puVar11);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack256,0x18cdc1683);
  pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack256,0x1fbdb2615);
  pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack256,0x162d277af);
  uVar4 = lib::L2CValue::as_number(pLVar6);
  lVar20 = lib::L2CValue::as_number(pLVar9);
  uVar17 = lib::L2CValue::as_number(pLVar10);
  local_190 = uVar4 & 0xffffffff | lVar20 << 0x20;
  uStack392 = (ulong)uVar17;
  app::lua_bind::PostureModule__set_pos_impl(*ppBVar14,(Vector3f *)&local_190);
  lib::L2CValue::L2CValue(aLStack416,0.0);
  lib::L2CValue::L2CValue(aLStack432,0.0);
  lua2cpp::L2CFighterBase::Vector2__create(param_5,(L2CValue)0x60,(L2CValue)0x50);
  lib::L2CValue::~L2CValue(aLStack432);
  lib::L2CValue::~L2CValue(aLStack416);
  bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack320);
  if ((bVar1 & 1U) == 0) {
    pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&local_70,0x18cdc1683);
    lib::L2CValue::L2CValue((L2CValue *)&local_190,1.0);
    lib::L2CValue::operator=(pLVar6,(L2CValue *)&local_190);
  }
  else {
    pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&local_70,0x18cdc1683);
    lib::L2CValue::L2CValue((L2CValue *)&local_190,-1.0);
    lib::L2CValue::operator=(pLVar6,(L2CValue *)&local_190);
  }
  lib::L2CValue::~L2CValue((L2CValue *)&local_190);
  lib::L2CValue::L2CValue((L2CValue *)&local_190,0x102643cb05);
  lib::L2CValue::L2CValue((L2CValue *)auStack144,0x12c6818d23);
  uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_190);
  uVar5 = lib::L2CValue::as_integer((L2CValue *)auStack144);
  fVar16 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar14,uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack128,fVar16);
  lib::L2CValue::~L2CValue((L2CValue *)auStack144);
  lib::L2CValue::~L2CValue((L2CValue *)&local_190);
  lib::L2CValue::L2CValue((L2CValue *)&local_190,0x102643cb05);
  lib::L2CValue::L2CValue(aLStack160,0x12fa8cb27a);
  uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_190);
  uVar5 = lib::L2CValue::as_integer(aLStack160);
  fVar16 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar14,uVar4,uVar5);
  lib::L2CValue::L2CValue((L2CValue *)auStack144,fVar16);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue((L2CValue *)&local_190);
  lib::L2CValue::L2CValue((L2CValue *)&local_190,0.5);
  lib::L2CValue::operator*(aLStack128,(L2CValue *)&local_190);
  lib::L2CValue::~L2CValue((L2CValue *)&local_190);
  lib::L2CValue::operator=(aLStack128,aLStack160);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::L2CValue((L2CValue *)&local_190,0.5);
  lib::L2CValue::operator*((L2CValue *)auStack144,(L2CValue *)&local_190);
  lib::L2CValue::~L2CValue((L2CValue *)&local_190);
  lib::L2CValue::operator=((L2CValue *)auStack144,aLStack160);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack160,0x66933a7e6);
  HVar8 = lib::L2CValue::as_hash(aLStack160);
  fVar16 = (float)app::sv_math::randf(HVar8,1.0);
  lib::L2CValue::L2CValue((L2CValue *)&local_190,fVar16);
  lib::L2CValue::operator=(aLStack336,(L2CValue *)&local_190);
  lib::L2CValue::~L2CValue((L2CValue *)&local_190);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack160,false);
  lib::L2CValue::L2CValue((L2CValue *)&local_190,0.5);
  uVar4 = lib::L2CValue::operator<(aLStack336,(L2CValue *)&local_190);
  lib::L2CValue::~L2CValue((L2CValue *)&local_190);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_190,true);
    lib::L2CValue::operator=(aLStack160,(L2CValue *)&local_190);
    lib::L2CValue::~L2CValue((L2CValue *)&local_190);
  }
  lib::L2CValue::L2CValue(aLStack448,0.0);
  lib::L2CValue::L2CValue(aLStack464,0.0);
  lua2cpp::L2CFighterBase::Vector2__create(param_5,(L2CValue)0x40,(L2CValue)0x30);
  lib::L2CValue::~L2CValue(aLStack464);
  lib::L2CValue::~L2CValue(aLStack448);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack256,0x1fbdb2615);
  pLVar9 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(auStack192 + 0x10),0x1fbdb2615);
  lib::L2CValue::operator=(pLVar9,pLVar6);
  bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack320);
  if ((bVar1 & 1U) == 0) {
    pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack224,0x5b4ca7514);
    pLVar9 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(auStack192 + 0x10),0x18cdc1683);
    lib::L2CValue::operator=(pLVar9,pLVar6);
  }
  else {
    pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack224,0x47a67e768);
    pLVar9 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(auStack192 + 0x10),0x18cdc1683);
    lib::L2CValue::operator=(pLVar9,pLVar6);
  }
  lib::L2CValue::L2CValue((L2CValue *)auStack192,0.0);
  lib::L2CValue::L2CValue(aLStack480,0.0);
  lib::L2CValue::L2CValue(aLStack496,0.0);
  lua2cpp::L2CFighterBase::Vector2__create(param_5,(L2CValue)0x20,(L2CValue)0x10);
  lib::L2CValue::~L2CValue(aLStack496);
  lib::L2CValue::~L2CValue(aLStack480);
  lib::L2CValue::L2CValue(aLStack528,0.0);
  lib::L2CValue::L2CValue(aLStack544,0.0);
  lua2cpp::L2CFighterBase::Vector2__create(param_5,(L2CValue)0xf0,(L2CValue)0xe0);
  lib::L2CValue::~L2CValue(aLStack544);
  lib::L2CValue::~L2CValue(aLStack528);
  lib::L2CValue::L2CValue(aLStack560,0x66933a7e6);
  HVar8 = lib::L2CValue::as_hash(aLStack560);
  fVar16 = (float)app::sv_math::randf(HVar8,1.0);
  lib::L2CValue::L2CValue((L2CValue *)&local_190,fVar16);
  lib::L2CValue::operator=(aLStack336,(L2CValue *)&local_190);
  lib::L2CValue::~L2CValue((L2CValue *)&local_190);
  lib::L2CValue::~L2CValue(aLStack560);
  lib::L2CValue::operator-(aLStack128,(L2CValue *)auStack144);
  lib::L2CValue::operator*(aLStack576,aLStack336);
  lib::L2CValue::operator+((L2CValue *)auStack144,aLStack560);
  lib::L2CValue::operator=((L2CValue *)auStack192,(L2CValue *)&local_190);
  lib::L2CValue::~L2CValue((L2CValue *)&local_190);
  lib::L2CValue::~L2CValue(aLStack560);
  lib::L2CValue::~L2CValue(aLStack576);
  lib::L2CValue::L2CValue((L2CValue *)&local_190,false);
  uVar4 = lib::L2CValue::operator==(aLStack160,(L2CValue *)&local_190);
  lib::L2CValue::~L2CValue((L2CValue *)&local_190);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::operator-((L2CValue *)auStack192);
    lib::L2CValue::operator=((L2CValue *)auStack192,(L2CValue *)&local_190);
    lib::L2CValue::~L2CValue((L2CValue *)&local_190);
  }
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack256,0x18cdc1683);
  pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack208,0x18cdc1683);
  lib::L2CValue::operator=(pLVar9,pLVar6);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack208,0x1fbdb2615);
  lib::L2CValue::L2CValue((L2CValue *)&local_190,0.0);
  lib::L2CValue::operator=(pLVar6,(L2CValue *)&local_190);
  lib::L2CValue::~L2CValue((L2CValue *)&local_190);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(auStack192 + 0x10),0x18cdc1683);
  pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack512,0x18cdc1683);
  lib::L2CValue::operator=(pLVar9,pLVar6);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack512,0x1fbdb2615);
  lib::L2CValue::L2CValue((L2CValue *)&local_190,0.0);
  lib::L2CValue::operator=(pLVar6,(L2CValue *)&local_190);
  lib::L2CValue::~L2CValue((L2CValue *)&local_190);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack208,0x18cdc1683);
  pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack208,0x1fbdb2615);
  pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack208,0x18cdc1683);
  pLVar13 = (L2CValue *)0x1fbdb2615;
  pLVar12 = (L2CValue *)lib::L2CValue::operator[](aLStack208,0x1fbdb2615);
  lib::L2CAgent::math_rad((L2CAgent *)auStack192,pLVar13);
  fVar16 = (float)lib::L2CValue::as_number(pLVar10);
  fVar18 = (float)lib::L2CValue::as_number(pLVar12);
  fVar19 = (float)lib::L2CValue::as_number(aLStack560);
  uVar21 = app::sv_math::vec2_rot(fVar16,fVar18,fVar19);
  lib::L2CValue::L2CValue((L2CValue *)&local_190,(float)uVar21);
  lib::L2CValue::L2CValue(aLStack384,(float)((ulong)uVar21 >> 0x20));
  lib::L2CValue::operator=(pLVar6,(L2CValue *)&local_190);
  lib::L2CValue::operator=(pLVar9,aLStack384);
  lib::L2CValue::~L2CValue(aLStack384);
  lib::L2CValue::~L2CValue((L2CValue *)&local_190);
  lib::L2CValue::~L2CValue(aLStack560);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack512,0x18cdc1683);
  pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack512,0x1fbdb2615);
  pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack512,0x18cdc1683);
  pLVar13 = (L2CValue *)0x1fbdb2615;
  pLVar12 = (L2CValue *)lib::L2CValue::operator[](aLStack512,0x1fbdb2615);
  lib::L2CAgent::math_rad((L2CAgent *)auStack192,pLVar13);
  fVar16 = (float)lib::L2CValue::as_number(pLVar10);
  fVar18 = (float)lib::L2CValue::as_number(pLVar12);
  fVar19 = (float)lib::L2CValue::as_number(aLStack560);
  uVar21 = app::sv_math::vec2_rot(fVar16,fVar18,fVar19);
  lib::L2CValue::L2CValue((L2CValue *)&local_190,(float)uVar21);
  lib::L2CValue::L2CValue(aLStack384,(float)((ulong)uVar21 >> 0x20));
  lib::L2CValue::operator=(pLVar6,(L2CValue *)&local_190);
  lib::L2CValue::operator=(pLVar9,aLStack384);
  lib::L2CValue::~L2CValue(aLStack384);
  lib::L2CValue::~L2CValue((L2CValue *)&local_190);
  lib::L2CValue::~L2CValue(aLStack560);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack208,0x1fbdb2615);
  pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack256,0x1fbdb2615);
  lib::L2CValue::operator+(pLVar6,pLVar9);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack208,0x1fbdb2615);
  lib::L2CValue::operator=(pLVar6,(L2CValue *)&local_190);
  lib::L2CValue::~L2CValue((L2CValue *)&local_190);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack512,0x1fbdb2615);
  pLVar9 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(auStack192 + 0x10),0x1fbdb2615);
  lib::L2CValue::operator+(pLVar6,pLVar9);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack512,0x1fbdb2615);
  lib::L2CValue::operator=(pLVar6,(L2CValue *)&local_190);
  lib::L2CValue::~L2CValue((L2CValue *)&local_190);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack208,0x1fbdb2615);
  pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack256,0x1fbdb2615);
  lib::L2CValue::operator=(pLVar9,pLVar6);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack256,0x18cdc1683);
  pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack256,0x1fbdb2615);
  pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack256,0x162d277af);
  uVar4 = lib::L2CValue::as_number(pLVar6);
  lVar20 = lib::L2CValue::as_number(pLVar9);
  uVar17 = lib::L2CValue::as_number(pLVar10);
  local_190 = uVar4 & 0xffffffff | lVar20 << 0x20;
  uStack392 = (ulong)uVar17;
  app::lua_bind::PostureModule__set_pos_impl(*ppBVar14,(Vector3f *)&local_190);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack208,0x1fbdb2615);
  lib::L2CValue::L2CValue((L2CValue *)&local_190,0.0);
  lib::L2CValue::operator+(pLVar6,(L2CValue *)&local_190);
  lib::L2CValue::~L2CValue((L2CValue *)&local_190);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_190,_WEAPON_SONIC_SUPERSONIC_STATUS_FINAL_WORK_FLOAT_MOVE_START_Y);
  fVar16 = (float)lib::L2CValue::as_number(aLStack560);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_190);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar14,fVar16,iVar3);
  lib::L2CValue::~L2CValue((L2CValue *)&local_190);
  lib::L2CValue::~L2CValue(aLStack560);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack512,0x1fbdb2615);
  lib::L2CValue::L2CValue((L2CValue *)&local_190,0.0);
  lib::L2CValue::operator+(pLVar6,(L2CValue *)&local_190);
  lib::L2CValue::~L2CValue((L2CValue *)&local_190);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_190,_WEAPON_SONIC_SUPERSONIC_STATUS_FINAL_WORK_FLOAT_MOVE_END_Y);
  fVar16 = (float)lib::L2CValue::as_number(aLStack560);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_190);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar14,fVar16,iVar3);
  lib::L2CValue::~L2CValue((L2CValue *)&local_190);
  lib::L2CValue::~L2CValue(aLStack560);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&local_70,0x18cdc1683);
  pLVar9 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&local_70,0x1fbdb2615);
  pLVar10 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&local_70,0x18cdc1683);
  pLVar13 = (L2CValue *)0x1fbdb2615;
  pLVar12 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&local_70,0x1fbdb2615);
  lib::L2CAgent::math_rad((L2CAgent *)auStack192,pLVar13);
  fVar16 = (float)lib::L2CValue::as_number(pLVar10);
  fVar18 = (float)lib::L2CValue::as_number(pLVar12);
  fVar19 = (float)lib::L2CValue::as_number(aLStack560);
  uVar21 = app::sv_math::vec2_rot(fVar16,fVar18,fVar19);
  lib::L2CValue::L2CValue((L2CValue *)&local_190,(float)uVar21);
  lib::L2CValue::L2CValue(aLStack384,(float)((ulong)uVar21 >> 0x20));
  lib::L2CValue::operator=(pLVar6,(L2CValue *)&local_190);
  lib::L2CValue::operator=(pLVar9,aLStack384);
  lib::L2CValue::~L2CValue(aLStack384);
  lib::L2CValue::~L2CValue((L2CValue *)&local_190);
  lib::L2CValue::~L2CValue(aLStack560);
  lib::L2CValue::L2CValue(aLStack592,0.0);
  lib::L2CValue::L2CValue(aLStack608,0.0);
  lua2cpp::L2CFighterBase::Vector2__create(param_5,(L2CValue)0xb0,(L2CValue)0xa0);
  lib::L2CValue::~L2CValue(aLStack608);
  lib::L2CValue::~L2CValue(aLStack592);
  FUN_710002b0a0(aLStack560,param_5);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&local_70,0x18cdc1683);
  lib::L2CValue::operator*(aLStack560,pLVar6);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&local_190,0x18cdc1683);
  lib::L2CValue::operator=(pLVar6,aLStack576);
  lib::L2CValue::~L2CValue(aLStack576);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&local_70,0x1fbdb2615);
  lib::L2CValue::operator*(aLStack560,pLVar6);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&local_190,0x1fbdb2615);
  lib::L2CValue::operator=(pLVar6,aLStack576);
  lib::L2CValue::~L2CValue(aLStack576);
  lib::L2CValue::L2CValue(aLStack576,_WEAPON_SONIC_SUPERSONIC_KINETIC_ENERGY_ID_GENERAL);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&local_190,0x18cdc1683);
  pLVar9 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&local_190,0x1fbdb2615);
  lib::L2CAgent::clear_lua_stack(param_5);
  lib::L2CAgent::push_lua_stack(param_5,aLStack576);
  lib::L2CAgent::push_lua_stack(param_5,pLVar6);
  lib::L2CAgent::push_lua_stack(param_5,pLVar9);
  app::sv_kinetic_energy::set_speed(param_5->luaStateAgent);
  lib::L2CValue::~L2CValue(aLStack576);
  lib::L2CValue::L2CValue(aLStack624,_WEAPON_SONIC_SUPERSONIC_INSTANCE_WORK_ID_FLASHING);
  iVar3 = lib::L2CValue::as_integer(aLStack624);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar14,iVar3);
  lib::L2CValue::L2CValue(aLStack576,(bool)(bVar2 & 1));
  bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack576);
  lib::L2CValue::~L2CValue(aLStack576);
  lib::L2CValue::~L2CValue(aLStack624);
  if ((bVar1 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack576,0xa2c1ca139);
    lib::L2CValue::L2CValue(aLStack624,0.0);
    lib::L2CValue::L2CValue(aLStack640,1.0);
    lib::L2CValue::L2CValue(aLStack656,false);
    HVar8 = lib::L2CValue::as_hash(aLStack576);
    fVar16 = (float)lib::L2CValue::as_number(aLStack624);
    fVar18 = (float)lib::L2CValue::as_number(aLStack640);
    bVar2 = lib::L2CValue::as_bool(aLStack656);
    app::lua_bind::MotionModule__change_motion_impl
              (*ppBVar14,HVar8,fVar16,fVar18,(bool)(bVar2 & 1),0.0,false,false);
  }
  else {
    lib::L2CValue::L2CValue(aLStack576,0x13c9f36cb9);
    lib::L2CValue::L2CValue(aLStack624,0.0);
    lib::L2CValue::L2CValue(aLStack640,1.0);
    lib::L2CValue::L2CValue(aLStack656,false);
    HVar8 = lib::L2CValue::as_hash(aLStack576);
    fVar16 = (float)lib::L2CValue::as_number(aLStack624);
    fVar18 = (float)lib::L2CValue::as_number(aLStack640);
    bVar2 = lib::L2CValue::as_bool(aLStack656);
    app::lua_bind::MotionModule__change_motion_impl
              (*ppBVar14,HVar8,fVar16,fVar18,(bool)(bVar2 & 1),0.0,false,false);
  }
  lib::L2CValue::~L2CValue(aLStack656);
  lib::L2CValue::~L2CValue(aLStack640);
  lib::L2CValue::~L2CValue(aLStack624);
  lib::L2CValue::~L2CValue(aLStack576);
  lib::L2CValue::~L2CValue(aLStack560);
  lib::L2CValue::~L2CValue((L2CValue *)&local_190);
  lib::L2CValue::~L2CValue(aLStack512);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue((L2CValue *)auStack192);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack192 + 0x10));
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue((L2CValue *)auStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  lib::L2CValue::~L2CValue(aLStack368);
  lib::L2CValue::~L2CValue(aLStack352);
  lib::L2CValue::~L2CValue(aLStack336);
  lib::L2CValue::~L2CValue(aLStack320);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack224);
  return;
}

