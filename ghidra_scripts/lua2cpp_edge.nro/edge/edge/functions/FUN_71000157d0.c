
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000157d0(void *param_1,L2CValue *param_2)

{
  bool bVar1;
  int iVar2;
  GroundCorrectKind GVar3;
  L2CValue *pLVar4;
  L2CValue *pLVar5;
  L2CValue *pLVar6;
  void *pvVar7;
  KineticEnergyNormal *pKVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  undefined8 local_c0;
  undefined8 uStack184;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue((L2CValue *)&local_c0,_FIGHTER_EDGE_STATUS_SPECIAL_HI_FLOAT_DECIDE_DIR_X);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_c0);
  fVar9 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar2);
  lib::L2CValue::L2CValue(aLStack112,fVar9);
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_EDGE_STATUS_SPECIAL_HI_FLOAT_DECIDE_DIR_Y);
  iVar2 = lib::L2CValue::as_integer(aLStack144);
  fVar9 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar2);
  lib::L2CValue::L2CValue(aLStack128,fVar9);
  lua2cpp::L2CFighterBase::Vector2__create(param_1,(L2CValue)0x90,(L2CValue)0x80);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue((L2CValue *)&local_c0);
  lib::L2CValue::L2CValue(aLStack144,false);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack96,0x18cdc1683);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack96,0x1fbdb2615);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack96,0x18cdc1683);
  lib::L2CValue::L2CValue(aLStack208,pLVar6);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack96,0x1fbdb2615);
  lib::L2CValue::L2CValue(aLStack224,pLVar6);
  FUN_7100016f20(&local_c0,param_1,aLStack208,aLStack224);
  lib::L2CValue::operator=(pLVar4,(L2CValue *)&local_c0);
  lib::L2CValue::operator=(pLVar5,aLStack176);
  lib::L2CValue::operator=(aLStack144,aLStack160);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue((L2CValue *)&local_c0);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack208);
  bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack144);
  if ((bVar1 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack256,SITUATION_KIND_AIR);
    lua2cpp::L2CFighterBase::set_situation(param_1,(L2CValue)0x0);
    lib::L2CValue::~L2CValue(aLStack256);
    lib::L2CValue::L2CValue((L2CValue *)&local_c0,GROUND_CORRECT_KIND_AIR);
    GVar3 = lib::L2CValue::as_integer((L2CValue *)&local_c0);
    app::lua_bind::GroundModule__correct_impl
              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),GVar3);
  }
  else {
    lib::L2CValue::L2CValue(aLStack240,_SITUATION_KIND_GROUND);
    lua2cpp::L2CFighterBase::set_situation(param_1,(L2CValue)0x10);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::L2CValue((L2CValue *)&local_c0,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
    GVar3 = lib::L2CValue::as_integer((L2CValue *)&local_c0);
    app::lua_bind::GroundModule__correct_impl
              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),GVar3);
  }
  lib::L2CValue::~L2CValue((L2CValue *)&local_c0);
  lib::L2CValue::L2CValue(aLStack288,0xa05589c71);
  lib::L2CValue::L2CValue(aLStack304,param_2);
  FUN_7100014a20(aLStack272,param_1,aLStack288,aLStack304);
  lib::L2CValue::~L2CValue(aLStack304);
  lib::L2CValue::~L2CValue(aLStack288);
  lib::L2CValue::operator*(aLStack96,aLStack272);
  lib::L2CValue::L2CValue((L2CValue *)&local_c0,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_c0);
  pvVar7 = (void *)app::lua_bind::KineticModule__get_energy_impl
                             (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar2);
  lib::L2CValue::L2CValue(aLStack336,pvVar7);
  lib::L2CValue::~L2CValue((L2CValue *)&local_c0);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack320,0x18cdc1683);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack320,0x1fbdb2615);
  uVar10 = lib::L2CValue::as_number(pLVar4);
  uVar11 = lib::L2CValue::as_number(pLVar5);
  local_c0 = CONCAT44(uVar11,uVar10);
  uStack184 = 0;
  pKVar8 = (KineticEnergyNormal *)lib::L2CValue::as_pointer(aLStack336);
  app::lua_bind::KineticEnergyNormal__set_speed_impl(pKVar8,(Vector2f *)&local_c0);
  lib::L2CValue::~L2CValue(aLStack336);
  lib::L2CValue::~L2CValue(aLStack320);
  lib::L2CValue::~L2CValue(aLStack272);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

