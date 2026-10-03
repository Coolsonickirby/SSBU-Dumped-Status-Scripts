
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100044ad0(L2CValue *param_1,L2CAgent *param_2,L2CValue *param_3)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  void *pvVar7;
  WeaponKineticEnergyGravity *pWVar8;
  L2CValue *pLVar9;
  L2CAgent *this;
  L2CValue *pLVar10;
  float fVar11;
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
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_3);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_PIKMIN_PIKMIN_INSTANCE_WORK_ID_INT_ACTION_COMP_FRAME);
    lib::L2CValue::L2CValue(aLStack112,-1);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    iVar4 = lib::L2CValue::as_integer(aLStack112);
    bVar2 = app::lua_bind::WorkModule__count_down_int_impl(param_2->moduleAccessor,iVar3,iVar4);
    lib::L2CValue::L2CValue(aLStack448,(bool)(bVar2 & 1));
    lib::L2CValue::~L2CValue(aLStack448);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_PIKMIN_PIKMIN_INSTANCE_WORK_ID_INT_ACTION_COMP_FRAME);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(param_2->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack112,iVar3);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,0xcc40f4e28);
    lib::L2CValue::L2CValue(aLStack144,0x20bcb4c1f6);
    uVar5 = lib::L2CValue::as_integer(aLStack96);
    uVar6 = lib::L2CValue::as_integer(aLStack144);
    iVar3 = app::lua_bind::WorkModule__get_param_int_impl(param_2->moduleAccessor,uVar5,uVar6);
    lib::L2CValue::L2CValue(aLStack128,iVar3);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack96);
    uVar5 = lib::L2CValue::operator<=(aLStack112,aLStack128);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack96,_WEAPON_PIKMIN_PIKMIN_STATUS_SPECIAL_LW_WORK_FLAG_DOWN_MOVE)
      ;
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__on_flag_impl(param_2->moduleAccessor,iVar3);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack144,_WEAPON_PIKMIN_PIKMIN_KINETIC_ENERGY_ID_GRAVITY);
      iVar3 = lib::L2CValue::as_integer(aLStack144);
      pvVar7 = (void *)app::lua_bind::KineticModule__get_energy_impl(param_2->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack96,pvVar7);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::L2CValue(aLStack144,0.0);
      fVar11 = (float)lib::L2CValue::as_number(aLStack144);
      pWVar8 = (WeaponKineticEnergyGravity *)lib::L2CValue::as_pointer(aLStack96);
      app::lua_bind::WeaponKineticEnergyGravity__set_speed_impl(pWVar8,fVar11);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::L2CValue(aLStack144,0.0);
      fVar11 = (float)lib::L2CValue::as_number(aLStack144);
      pWVar8 = (WeaponKineticEnergyGravity *)lib::L2CValue::as_pointer(aLStack96);
      app::lua_bind::WeaponKineticEnergyGravity__set_accel_impl(pWVar8,fVar11);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack96);
    }
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_PIKMIN_PIKMIN_STATUS_SPECIAL_LW_WORK_FLAG_DOWN_MOVE);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(param_2->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack144,(bool)(bVar2 & 1));
    lib::L2CValue::~L2CValue(aLStack96);
    fVar11 = (float)app::lua_bind::PostureModule__pos_x_impl(param_2->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack176,fVar11);
    fVar11 = (float)app::lua_bind::PostureModule__pos_y_impl(param_2->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack192,fVar11);
    lua2cpp::L2CFighterBase::Vector2__create(param_2,(L2CValue)0x50,(L2CValue)0x40);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar5 = lib::L2CValue::operator==(aLStack144,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue
                (aLStack208,_WEAPON_PIKMIN_PIKMIN_STATUS_SPECIAL_LW_WORK_FLOAT_BASE_POS_X);
      iVar3 = lib::L2CValue::as_integer(aLStack208);
      fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(param_2->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack96,fVar11);
      pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x18cdc1683);
      lib::L2CValue::operator=(pLVar9,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack208);
      lib::L2CValue::L2CValue
                (aLStack208,_WEAPON_PIKMIN_PIKMIN_STATUS_SPECIAL_LW_WORK_FLOAT_BASE_POS_Y);
      iVar3 = lib::L2CValue::as_integer(aLStack208);
      fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(param_2->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack96,fVar11);
      pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x1fbdb2615);
      lib::L2CValue::operator=(pLVar9,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack208);
    }
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_PIKMIN_PIKMIN_INSTANCE_WORK_ID_FLOAT_TARGET_X);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(param_2->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack224,fVar11);
    lib::L2CValue::L2CValue(aLStack256,_WEAPON_PIKMIN_PIKMIN_INSTANCE_WORK_ID_FLOAT_TARGET_Y);
    iVar3 = lib::L2CValue::as_integer(aLStack256);
    fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(param_2->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack240,fVar11);
    lua2cpp::L2CFighterBase::Vector2__create(param_2,(L2CValue)0x20,(L2CValue)0x10);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack256);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::operator-(aLStack208,aLStack160);
    lib::L2CValue::L2CValue(aLStack288,aLStack256);
    lua2cpp::L2CFighterBase::Vector2__length(param_2,(L2CValue)0xe0);
    lib::L2CValue::~L2CValue(aLStack288);
    lib::L2CValue::L2CValue(aLStack320,aLStack256);
    lua2cpp::L2CFighterBase::Vector2__normalize(param_2,(L2CValue)0xc0);
    lib::L2CValue::~L2CValue(aLStack320);
    lib::L2CValue::L2CValue(aLStack352,0.0);
    lib::L2CValue::L2CValue(aLStack368,0.0);
    lua2cpp::L2CFighterBase::Vector2__create(param_2,(L2CValue)0xa0,(L2CValue)0x90);
    lib::L2CValue::~L2CValue(aLStack368);
    lib::L2CValue::~L2CValue(aLStack352);
    pLVar9 = (L2CValue *)0x18cdc1683;
    this = (L2CAgent *)lib::L2CValue::operator[](aLStack256,0x18cdc1683);
    lib::L2CAgent::math_abs(this,pLVar9);
    lib::L2CValue::L2CValue(aLStack96,0);
    uVar5 = lib::L2CValue::operator<=(aLStack112,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack96,1);
      lib::L2CValue::operator=(aLStack112,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
    }
    lib::L2CValue::L2CValue(aLStack96,1);
    uVar5 = lib::L2CValue::operator<(aLStack96,aLStack112);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::operator/(aLStack272,aLStack112);
      lib::L2CValue::operator*(aLStack304,aLStack400);
      lib::L2CValue::operator=(aLStack336,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack400);
    }
    lib::L2CValue::L2CValue(aLStack96,0xcc40f4e28);
    lib::L2CValue::L2CValue(aLStack416,0x1c4dcc4d81);
    uVar5 = lib::L2CValue::as_integer(aLStack96);
    uVar6 = lib::L2CValue::as_integer(aLStack416);
    fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl
                              (param_2->moduleAccessor,uVar5,uVar6);
    lib::L2CValue::L2CValue(aLStack400,fVar11);
    lib::L2CValue::~L2CValue(aLStack416);
    lib::L2CValue::~L2CValue(aLStack96);
    uVar5 = lib::L2CValue::operator<(aLStack384,aLStack400);
    if ((uVar5 & 1) != 0) {
      pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack256,0x18cdc1683);
      lib::L2CValue::operator-(aLStack400);
      uVar5 = lib::L2CValue::operator<=(pLVar9,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar5 & 1) == 0) {
        pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack256,0x18cdc1683);
        uVar5 = lib::L2CValue::operator<=(aLStack400,pLVar9);
        if ((uVar5 & 1) != 0) {
          pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack336,0x18cdc1683);
          lib::L2CValue::operator=(pLVar9,aLStack400);
        }
      }
      else {
        lib::L2CValue::operator-(aLStack400);
        pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack336,0x18cdc1683);
        lib::L2CValue::operator=(pLVar9,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
      }
    }
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack144);
    if ((bVar1 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack96,_WEAPON_PIKMIN_PIKMIN_KINETIC_ENERGY_ID_GENERAL);
      pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack336,0x18cdc1683);
      lib::L2CValue::L2CValue(aLStack416,0.0);
      lib::L2CAgent::clear_lua_stack(param_2);
      lib::L2CAgent::push_lua_stack(param_2,aLStack96);
      lib::L2CAgent::push_lua_stack(param_2,pLVar9);
      lib::L2CAgent::push_lua_stack(param_2,aLStack416);
      app::sv_kinetic_energy::set_speed(param_2->luaStateAgent);
      lib::L2CValue::~L2CValue(aLStack416);
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,_WEAPON_PIKMIN_PIKMIN_KINETIC_ENERGY_ID_GENERAL);
      pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack336,0x18cdc1683);
      pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack336,0x1fbdb2615);
      lib::L2CAgent::clear_lua_stack(param_2);
      lib::L2CAgent::push_lua_stack(param_2,aLStack96);
      lib::L2CAgent::push_lua_stack(param_2,pLVar9);
      lib::L2CAgent::push_lua_stack(param_2,pLVar10);
      app::sv_kinetic_energy::set_speed(param_2->luaStateAgent);
    }
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar5 = lib::L2CValue::operator==(aLStack144,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar5 & 1) != 0) {
      pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x18cdc1683);
      pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack336,0x18cdc1683);
      lib::L2CValue::operator+(pLVar9,pLVar10);
      lib::L2CValue::L2CValue(aLStack96,0.0);
      lib::L2CValue::operator+(aLStack432,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue
                (aLStack96,_WEAPON_PIKMIN_PIKMIN_STATUS_SPECIAL_LW_WORK_FLOAT_BASE_POS_X);
      fVar11 = (float)lib::L2CValue::as_number(aLStack416);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__set_float_impl(param_2->moduleAccessor,fVar11,iVar3);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack416);
      lib::L2CValue::~L2CValue(aLStack432);
      pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x1fbdb2615);
      pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack336,0x1fbdb2615);
      lib::L2CValue::operator+(pLVar9,pLVar10);
      lib::L2CValue::L2CValue(aLStack96,0.0);
      lib::L2CValue::operator+(aLStack432,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue
                (aLStack96,_WEAPON_PIKMIN_PIKMIN_STATUS_SPECIAL_LW_WORK_FLOAT_BASE_POS_Y);
      fVar11 = (float)lib::L2CValue::as_number(aLStack416);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__set_float_impl(param_2->moduleAccessor,fVar11,iVar3);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack416);
      lib::L2CValue::~L2CValue(aLStack432);
    }
    lib::L2CValue::~L2CValue(aLStack400);
    lib::L2CValue::~L2CValue(aLStack384);
    lib::L2CValue::~L2CValue(aLStack336);
    lib::L2CValue::~L2CValue(aLStack304);
    lib::L2CValue::~L2CValue(aLStack272);
    lib::L2CValue::~L2CValue(aLStack256);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack112);
  }
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

