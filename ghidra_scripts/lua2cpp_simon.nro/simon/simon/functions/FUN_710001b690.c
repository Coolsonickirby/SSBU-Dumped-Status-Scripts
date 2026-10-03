
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001b690(void *param_1)

{
  char cVar1;
  long lVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  L2CValue *pLVar6;
  ulong uVar7;
  void *pvVar8;
  ulong uVar9;
  FighterKineticEnergyGravity *pFVar10;
  KineticEnergy *pKVar11;
  float fVar12;
  undefined8 uVar13;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)((long)param_1 + 200),0x16);
  lib::L2CValue::L2CValue(aLStack64,SITUATION_KIND_AIR);
  uVar7 = lib::L2CValue::operator==(pLVar6,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar7 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SIMON_STATUS_SPECIAL_S_FLAG_FALL);
    iVar5 = lib::L2CValue::as_integer(aLStack80);
    bVar3 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar5);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar3 & 1));
    bVar4 = lib::L2CValue::operator.cast.to.bool(aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((bVar4 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SIMON_STATUS_SPECIAL_S_FLAG_FALLED);
      iVar5 = lib::L2CValue::as_integer(aLStack80);
      bVar3 = app::lua_bind::WorkModule__is_flag_impl
                        (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar5);
      lib::L2CValue::L2CValue(aLStack64,(bool)(bVar3 & 1));
      bVar4 = lib::L2CValue::operator.cast.to.bool(aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((bVar4 & 1U) == 0) {
        return;
      }
      lib::L2CValue::L2CValue(aLStack80,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      iVar5 = lib::L2CValue::as_integer(aLStack80);
      pvVar8 = (void *)app::lua_bind::KineticModule__get_energy_impl
                                 (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar5);
      lib::L2CValue::L2CValue(aLStack64,pvVar8);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_SIMON_STATUS_SPECIAL_S_FLOAT_ACCEL_Y);
      iVar5 = lib::L2CValue::as_integer(aLStack96);
      fVar12 = (float)app::lua_bind::WorkModule__get_float_impl
                                (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar5);
      lib::L2CValue::L2CValue(aLStack80,fVar12);
      fVar12 = (float)lib::L2CValue::as_number(aLStack80);
      pFVar10 = (FighterKineticEnergyGravity *)lib::L2CValue::as_pointer(aLStack64);
      app::lua_bind::FighterKineticEnergyGravity__set_accel_impl(pFVar10,fVar12);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_SIMON_STATUS_SPECIAL_S_FLOAT_LIMIT_SPEED_Y);
      iVar5 = lib::L2CValue::as_integer(aLStack96);
      fVar12 = (float)app::lua_bind::WorkModule__get_float_impl
                                (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar5);
      lib::L2CValue::L2CValue(aLStack80,fVar12);
      fVar12 = (float)lib::L2CValue::as_number(aLStack80);
      pFVar10 = (FighterKineticEnergyGravity *)lib::L2CValue::as_pointer(aLStack64);
      app::lua_bind::FighterKineticEnergyGravity__set_stable_speed_impl(pFVar10,fVar12);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SIMON_STATUS_SPECIAL_S_FLAG_FALLED);
      iVar5 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__off_flag_impl
                (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar5);
      lib::L2CValue::~L2CValue(aLStack80);
      lVar2 = -0x30;
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_SIMON_STATUS_SPECIAL_S_FLAG_FALLED);
      iVar5 = lib::L2CValue::as_integer(aLStack96);
      bVar3 = app::lua_bind::WorkModule__is_flag_impl
                        (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar5);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar3 & 1));
      lib::L2CValue::operator!(aLStack80);
      bVar4 = lib::L2CValue::operator.cast.to.bool(aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((bVar4 & 1U) == 0) {
        return;
      }
      lib::L2CValue::L2CValue(aLStack64,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      iVar5 = lib::L2CValue::as_integer(aLStack64);
      pvVar8 = (void *)app::lua_bind::KineticModule__get_energy_impl
                                 (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar5);
      lib::L2CValue::L2CValue(aLStack96,pvVar8);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,0xfea97fe73);
      lib::L2CValue::L2CValue(aLStack80,0x7b9905530);
      uVar7 = lib::L2CValue::as_integer(aLStack64);
      uVar9 = lib::L2CValue::as_integer(aLStack80);
      fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar7,uVar9)
      ;
      lib::L2CValue::L2CValue(aLStack112,fVar12);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,0xfea97fe73);
      lib::L2CValue::L2CValue(aLStack80,0xd6991270c);
      uVar7 = lib::L2CValue::as_integer(aLStack64);
      uVar9 = lib::L2CValue::as_integer(aLStack80);
      fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar7,uVar9)
      ;
      lib::L2CValue::L2CValue(aLStack128,fVar12);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack64);
      pFVar10 = (FighterKineticEnergyGravity *)lib::L2CValue::as_pointer(aLStack96);
      fVar12 = (float)app::lua_bind::FighterKineticEnergyGravity__get_accel_impl(pFVar10);
      lib::L2CValue::L2CValue(aLStack144,fVar12);
      lib::L2CValue::L2CValue(aLStack64,0.0);
      lib::L2CValue::operator+(aLStack144,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_SIMON_STATUS_SPECIAL_S_FLOAT_ACCEL_Y);
      fVar12 = (float)lib::L2CValue::as_number(aLStack80);
      iVar5 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__set_float_impl
                (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),fVar12,iVar5);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack144);
      pFVar10 = (FighterKineticEnergyGravity *)lib::L2CValue::as_pointer(aLStack96);
      fVar12 = (float)app::lua_bind::FighterKineticEnergyGravity__get_stable_speed_impl(pFVar10);
      lib::L2CValue::L2CValue(aLStack144,fVar12);
      lib::L2CValue::L2CValue(aLStack64,0.0);
      lib::L2CValue::operator+(aLStack144,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_SIMON_STATUS_SPECIAL_S_FLOAT_LIMIT_SPEED_Y);
      fVar12 = (float)lib::L2CValue::as_number(aLStack80);
      iVar5 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__set_float_impl
                (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),fVar12,iVar5);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::operator-(aLStack112);
      fVar12 = (float)lib::L2CValue::as_number(aLStack64);
      pFVar10 = (FighterKineticEnergyGravity *)lib::L2CValue::as_pointer(aLStack96);
      app::lua_bind::FighterKineticEnergyGravity__set_accel_impl(pFVar10,fVar12);
      lib::L2CValue::~L2CValue(aLStack64);
      fVar12 = (float)lib::L2CValue::as_number(aLStack128);
      pFVar10 = (FighterKineticEnergyGravity *)lib::L2CValue::as_pointer(aLStack96);
      app::lua_bind::FighterKineticEnergyGravity__set_stable_speed_impl(pFVar10,fVar12);
      pKVar11 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack96);
      uVar13 = app::lua_bind::KineticEnergy__get_speed_impl(pKVar11);
      lib::L2CValue::L2CValue(aLStack176,(float)uVar13);
      lib::L2CValue::L2CValue(aLStack160,(float)((ulong)uVar13 >> 0x20));
      lib::L2CValue::L2CValue(aLStack64,aLStack176);
      lib::L2CValue::L2CValue(aLStack80,aLStack160);
      cVar1 = (char)&stack0xfffffffffffffff0;
      lua2cpp::L2CFighterBase::Vector2__create
                (param_1,(L2CValue)(cVar1 + -0x30),(L2CValue)(cVar1 + -0x40));
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack176);
      pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack144,0x1fbdb2615);
      lib::L2CValue::operator-(aLStack128);
      uVar7 = lib::L2CValue::operator<(pLVar6,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar7 & 1) != 0) {
        lib::L2CValue::operator-(aLStack128);
        fVar12 = (float)lib::L2CValue::as_number(aLStack64);
        pFVar10 = (FighterKineticEnergyGravity *)lib::L2CValue::as_pointer(aLStack96);
        app::lua_bind::FighterKineticEnergyGravity__set_speed_impl(pFVar10,fVar12);
        lib::L2CValue::~L2CValue(aLStack64);
      }
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_SIMON_STATUS_SPECIAL_S_FLAG_FALLED);
      iVar5 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__on_flag_impl
                (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar5);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack112);
      lVar2 = -0x50;
    }
    lib::L2CValue::~L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar2));
  }
  return;
}

