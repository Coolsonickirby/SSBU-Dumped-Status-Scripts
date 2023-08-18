
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterReflet::status::SpecialHi2_init(L2CFighterReflet *this,L2CValue *return_value)

{
  int iVar1;
  ulong uVar2;
  L2CValue *pLVar3;
  L2CValue *this_00;
  void *pvVar4;
  ulong uVar5;
  BattleObjectModuleAccessor *pBVar6;
  KineticEnergy *pKVar7;
  float fVar8;
  uint uVar9;
  undefined8 uVar10;
  long lVar11;
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
  ulong local_c0;
  undefined8 uStack184;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  ulong local_60;
  ulong uStack88;
  
  iVar1 = app::lua_bind::StatusModule__status_kind_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack112,iVar1);
  lib::L2CValue::L2CValue((L2CValue *)&local_c0,_FIGHTER_STATUS_KIND_SPECIAL_HI);
  uVar2 = lib::L2CValue::operator__(aLStack112,(L2CValue *)&local_c0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
  if ((uVar2 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_c0,_FIGHTER_REFLET_STATUS_SPECIAL_HI_FLAG_JUMP);
    iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_c0);
    app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
    lib::L2CValue::L2CValue((L2CValue *)&local_c0,_FIGHTER_REFLET_STATUS_SPECIAL_HI_FLAG_TRY_2ND);
    iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_c0);
    app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
    lib::L2CValue::L2CValue(aLStack144,0.0);
    lib::L2CValue::L2CValue(aLStack160,0.0);
    lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x70,(L2CValue)0x60);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x18cdc1683);
    this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x1fbdb2615);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
    iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    uVar10 = app::lua_bind::KineticModule__get_sum_speed_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue((L2CValue *)&local_c0,(float)uVar10);
    lib::L2CValue::L2CValue(aLStack176,(float)((ulong)uVar10 >> 0x20));
    lib::L2CValue::operator_(pLVar3,(L2CValue *)&local_c0);
    lib::L2CValue::operator_(this_00,aLStack176);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue((L2CValue *)&local_c0,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
    iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_c0);
    pvVar4 = (void *)app::lua_bind::KineticModule__get_energy_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue(aLStack208,pvVar4);
    lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
    lib::L2CValue::L2CValue(aLStack224,_ENERGY_GRAVITY_RESET_TYPE_GRAVITY);
    lib::L2CValue::L2CValue(aLStack240,0.0);
    pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x1fbdb2615);
    lib::L2CValue::L2CValue(aLStack288,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack304,0x223ceba862);
    uVar2 = lib::L2CValue::as_integer(aLStack288);
    uVar5 = lib::L2CValue::as_integer(aLStack304);
    fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar2,uVar5)
    ;
    lib::L2CValue::L2CValue(aLStack272,fVar8);
    lib::L2CValue::operator_(pLVar3,aLStack272);
    lib::L2CValue::L2CValue(aLStack320,0.0);
    lib::L2CValue::L2CValue(aLStack336,0.0);
    lib::L2CValue::L2CValue(aLStack352,0.0);
    pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
    iVar1 = lib::L2CValue::as_integer(aLStack224);
    uVar2 = lib::L2CValue::as_number(aLStack240);
    uVar9 = lib::L2CValue::as_number(aLStack256);
    local_c0 = uVar2 & 0xffffffff | (ulong)uVar9 << 0x20;
    uStack184 = 0;
    uVar2 = lib::L2CValue::as_number(aLStack320);
    lVar11 = lib::L2CValue::as_number(aLStack336);
    uVar9 = lib::L2CValue::as_number(aLStack352);
    local_60 = uVar2 & 0xffffffff | lVar11 << 0x20;
    uStack88 = (ulong)uVar9;
    pBVar6 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar3);
    pKVar7 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack208);
    app::lua_bind::KineticEnergy__reset_energy_impl
              (pKVar7,iVar1,(Vector2f *)&local_c0,(Vector3f *)&local_60,pBVar6);
    lib::L2CValue::_L2CValue(aLStack352);
    lib::L2CValue::_L2CValue(aLStack336);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::L2CValue((L2CValue *)&local_c0,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
    iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_c0);
    app::lua_bind::KineticModule__enable_energy_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
    pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x18cdc1683);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack240,0x22fd6577a2);
    uVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    uVar5 = lib::L2CValue::as_integer(aLStack240);
    fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar2,uVar5)
    ;
    lib::L2CValue::L2CValue((L2CValue *)&local_c0,fVar8);
    lib::L2CValue::operator_(pLVar3,(L2CValue *)&local_c0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue((L2CValue *)&local_c0,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_c0);
    pvVar4 = (void *)app::lua_bind::KineticModule__get_energy_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue(aLStack240,pvVar4);
    lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
    lib::L2CValue::L2CValue(aLStack256,_ENERGY_STOP_RESET_TYPE_FREE);
    lib::L2CValue::L2CValue(aLStack272,0.0);
    lib::L2CValue::L2CValue(aLStack288,0.0);
    lib::L2CValue::L2CValue(aLStack304,0.0);
    lib::L2CValue::L2CValue(aLStack320,0.0);
    pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
    iVar1 = lib::L2CValue::as_integer(aLStack256);
    uVar2 = lib::L2CValue::as_number(aLStack224);
    uVar9 = lib::L2CValue::as_number(aLStack272);
    local_c0 = uVar2 & 0xffffffff | (ulong)uVar9 << 0x20;
    uStack184 = 0;
    uVar2 = lib::L2CValue::as_number(aLStack288);
    lVar11 = lib::L2CValue::as_number(aLStack304);
    uVar9 = lib::L2CValue::as_number(aLStack320);
    local_60 = uVar2 & 0xffffffff | lVar11 << 0x20;
    uStack88 = (ulong)uVar9;
    pBVar6 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar3);
    pKVar7 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack240);
    app::lua_bind::KineticEnergy__reset_energy_impl
              (pKVar7,iVar1,(Vector2f *)&local_c0,(Vector3f *)&local_60,pBVar6);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::L2CValue((L2CValue *)&local_c0,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_c0);
    app::lua_bind::KineticModule__enable_energy_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
    lib::L2CValue::L2CValue((L2CValue *)&local_c0,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
    iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_c0);
    app::lua_bind::KineticModule__unable_energy_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
    lib::L2CValue::L2CValue((L2CValue *)&local_c0,FIGHTER_KINETIC_ENERGY_ID_MOTION);
    iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_c0);
    app::lua_bind::KineticModule__unable_energy_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack128);
  }
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}
