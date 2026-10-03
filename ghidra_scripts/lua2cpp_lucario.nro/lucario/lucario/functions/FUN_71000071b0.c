
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000071b0(void *param_1)

{
  byte bVar1;
  int iVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  void *pvVar7;
  KineticEnergyNormal *pKVar8;
  KineticEnergy *pKVar9;
  ulong *puVar10;
  float fVar11;
  uint uVar12;
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  ulong local_150;
  undefined8 uStack328;
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  undefined auStack288 [32];
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
  
  lib::L2CValue::L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack176);
  lib::L2CValue::L2CValue(aLStack192);
  lib::L2CValue::L2CValue(aLStack208);
  lib::L2CValue::L2CValue(aLStack240,0.0);
  lib::L2CValue::L2CValue(aLStack256,0.0);
  lua2cpp::L2CFighterBase::Vector2__create(param_1,(L2CValue)0x10,(L2CValue)0x0);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue(aLStack240);
  bVar1 = app::lua_bind::TurnModule__is_turn_impl
                    (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40));
  lib::L2CValue::L2CValue((L2CValue *)&local_150,(bool)(bVar1 & 1));
  lib::L2CValue::operator=(aLStack96,(L2CValue *)&local_150);
  lib::L2CValue::~L2CValue((L2CValue *)&local_150);
  lib::L2CValue::L2CValue
            ((L2CValue *)(auStack288 + 0x10),_FIGHTER_LUCARIO_MACH_STATUS_WORK_ID_FLAG_PREV_TURN);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)(auStack288 + 0x10));
  bVar1 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar2);
  lib::L2CValue::L2CValue((L2CValue *)&local_150,(bool)(bVar1 & 1));
  lib::L2CValue::operator=(aLStack112,(L2CValue *)&local_150);
  lib::L2CValue::~L2CValue((L2CValue *)&local_150);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack288 + 0x10));
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_150,_FIGHTER_LUCARIO_MACH_STATUS_WORK_ID_FLAG_PREV_TURN);
  bVar1 = lib::L2CValue::as_bool(aLStack96);
  pLVar3 = (L2CValue *)lib::L2CValue::as_integer((L2CValue *)&local_150);
  app::lua_bind::WorkModule__set_flag_impl
            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),(bool)(bVar1 & 1),(int)pLVar3);
  lib::L2CValue::~L2CValue((L2CValue *)&local_150);
  uVar4 = lib::L2CValue::operator==(aLStack96,aLStack112);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_150,false);
    uVar4 = lib::L2CValue::operator==(aLStack96,(L2CValue *)&local_150);
    lib::L2CValue::~L2CValue((L2CValue *)&local_150);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue
                ((L2CValue *)(auStack288 + 0x10),_FIGHTER_LUCARIO_MACH_STATUS_WORK_ID_FLOAT_RUSH_DIR
                );
      iVar2 = lib::L2CValue::as_integer((L2CValue *)(auStack288 + 0x10));
      fVar11 = (float)app::lua_bind::WorkModule__get_float_impl
                                (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar2);
      lib::L2CValue::L2CValue((L2CValue *)&local_150,fVar11);
      puVar10 = &local_150;
      lib::L2CValue::operator=(aLStack128,(L2CValue *)puVar10);
      lib::L2CValue::~L2CValue((L2CValue *)&local_150);
      lib::L2CValue::~L2CValue((L2CValue *)(auStack288 + 0x10));
      lib::L2CAgent::math_sin((L2CAgent *)aLStack128,(L2CValue *)puVar10);
      puVar10 = &local_150;
      lib::L2CValue::operator=(aLStack144,(L2CValue *)puVar10);
      lib::L2CValue::~L2CValue((L2CValue *)&local_150);
      lib::L2CAgent::math_cos((L2CAgent *)aLStack128,(L2CValue *)puVar10);
      lib::L2CValue::operator=(aLStack160,(L2CValue *)&local_150);
      lib::L2CValue::~L2CValue((L2CValue *)&local_150);
      lib::L2CValue::operator-(aLStack160);
      lib::L2CAgent::math_atan((L2CAgent *)aLStack144,(L2CValue *)(auStack288 + 0x10),pLVar3);
      puVar10 = &local_150;
      lib::L2CValue::operator=(aLStack128,(L2CValue *)puVar10);
      lib::L2CValue::~L2CValue((L2CValue *)&local_150);
      lib::L2CValue::~L2CValue((L2CValue *)(auStack288 + 0x10));
      lib::L2CAgent::math_abs((L2CAgent *)aLStack128,(L2CValue *)puVar10);
      lib::L2CValue::L2CValue((L2CValue *)&local_150,0.05);
      puVar10 = &local_150;
      uVar4 = lib::L2CValue::operator<=((L2CValue *)(auStack288 + 0x10),(L2CValue *)puVar10);
      lib::L2CValue::~L2CValue((L2CValue *)&local_150);
      lib::L2CValue::~L2CValue((L2CValue *)(auStack288 + 0x10));
      if ((uVar4 & 1) == 0) {
        lib::L2CAgent::math_abs((L2CAgent *)aLStack128,(L2CValue *)puVar10);
        pLVar3 = aLStack304;
        lib::L2CValue::operator-((L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST,pLVar3);
        lib::L2CAgent::math_abs((L2CAgent *)auStack288,pLVar3);
        lib::L2CValue::L2CValue((L2CValue *)&local_150,0.05);
        uVar4 = lib::L2CValue::operator<=((L2CValue *)(auStack288 + 0x10),(L2CValue *)&local_150);
        lib::L2CValue::~L2CValue((L2CValue *)&local_150);
        lib::L2CValue::~L2CValue((L2CValue *)(auStack288 + 0x10));
        lib::L2CValue::~L2CValue((L2CValue *)auStack288);
        lib::L2CValue::~L2CValue(aLStack304);
        if ((uVar4 & 1) != 0) {
          lib::L2CValue::operator=(aLStack128,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
        }
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)&local_150,0.0);
        lib::L2CValue::operator=(aLStack128,(L2CValue *)&local_150);
        lib::L2CValue::~L2CValue((L2CValue *)&local_150);
      }
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_150,_FIGHTER_LUCARIO_MACH_STATUS_WORK_ID_FLOAT_RUSH_DIR);
      fVar11 = (float)lib::L2CValue::as_number(aLStack128);
      iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_150);
      app::lua_bind::WorkModule__set_float_impl
                (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),fVar11,iVar2);
      lib::L2CValue::~L2CValue((L2CValue *)&local_150);
      lib::L2CValue::L2CValue((L2CValue *)&local_150,0x1086bc4a93);
      lib::L2CValue::L2CValue((L2CValue *)auStack288,0xa05589c71);
      uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_150);
      uVar5 = lib::L2CValue::as_integer((L2CValue *)auStack288);
      fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar4,uVar5)
      ;
      lib::L2CValue::L2CValue((L2CValue *)(auStack288 + 0x10),fVar11);
      lib::L2CValue::~L2CValue((L2CValue *)auStack288);
      lib::L2CValue::~L2CValue((L2CValue *)&local_150);
      pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack224,0x18cdc1683);
      pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack224,0x1fbdb2615);
      lib::L2CValue::L2CValue(aLStack352,aLStack128);
      lib::L2CValue::L2CValue(aLStack368,(L2CValue *)(auStack288 + 0x10));
      FUN_7100008500(&local_150,param_1,aLStack352,aLStack368);
      lib::L2CValue::operator=(pLVar3,(L2CValue *)&local_150);
      lib::L2CValue::operator=(pLVar6,aLStack320);
      lib::L2CValue::~L2CValue(aLStack320);
      lib::L2CValue::~L2CValue((L2CValue *)&local_150);
      lib::L2CValue::~L2CValue(aLStack368);
      lib::L2CValue::~L2CValue(aLStack352);
      app::lua_bind::KineticModule__clear_speed_all_impl
                (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40));
      app::lua_bind::KineticModule__unable_energy_all_impl
                (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40));
      lib::L2CValue::L2CValue((L2CValue *)&local_150,_FIGHTER_KINETIC_ENERGY_ID_STOP);
      iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_150);
      pvVar7 = (void *)app::lua_bind::KineticModule__get_energy_impl
                                 (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar2);
      lib::L2CValue::L2CValue((L2CValue *)auStack288,pvVar7);
      lib::L2CValue::~L2CValue((L2CValue *)&local_150);
      pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack224,0x18cdc1683);
      pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack224,0x1fbdb2615);
      uVar4 = lib::L2CValue::as_number(pLVar3);
      uVar12 = lib::L2CValue::as_number(pLVar6);
      local_150 = uVar4 & 0xffffffff | (ulong)uVar12 << 0x20;
      uStack328 = 0;
      pKVar8 = (KineticEnergyNormal *)lib::L2CValue::as_pointer((L2CValue *)auStack288);
      app::lua_bind::KineticEnergyNormal__set_speed_impl(pKVar8,(Vector2f *)&local_150);
      pKVar9 = (KineticEnergy *)lib::L2CValue::as_pointer((L2CValue *)auStack288);
      app::lua_bind::KineticEnergy__enable_impl(pKVar9);
      lib::L2CValue::L2CValue(aLStack304,_FIGHTER_LUCARIO_MACH_STATUS_WORK_ID_FLOAT_START_CHARA_LR);
      iVar2 = lib::L2CValue::as_integer(aLStack304);
      fVar11 = (float)app::lua_bind::WorkModule__get_float_impl
                                (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar2);
      lib::L2CValue::L2CValue((L2CValue *)&local_150,fVar11);
      lib::L2CValue::operator=(aLStack176,(L2CValue *)&local_150);
      lib::L2CValue::~L2CValue((L2CValue *)&local_150);
      lib::L2CValue::~L2CValue(aLStack304);
      lib::L2CValue::operator-(aLStack176);
      lib::L2CValue::L2CValue(aLStack304,_FIGHTER_LUCARIO_MACH_STATUS_WORK_ID_FLOAT_START_CHARA_LR);
      fVar11 = (float)lib::L2CValue::as_number((L2CValue *)&local_150);
      iVar2 = lib::L2CValue::as_integer(aLStack304);
      app::lua_bind::WorkModule__set_float_impl
                (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),fVar11,iVar2);
      lib::L2CValue::~L2CValue(aLStack304);
      lib::L2CValue::~L2CValue((L2CValue *)&local_150);
      lib::L2CValue::L2CValue(aLStack304,_FIGHTER_LUCARIO_MACH_STATUS_WORK_ID_FLOAT_LAST_LR);
      iVar2 = lib::L2CValue::as_integer(aLStack304);
      fVar11 = (float)app::lua_bind::WorkModule__get_float_impl
                                (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar2);
      lib::L2CValue::L2CValue((L2CValue *)&local_150,fVar11);
      lib::L2CValue::operator=(aLStack176,(L2CValue *)&local_150);
      lib::L2CValue::~L2CValue((L2CValue *)&local_150);
      lib::L2CValue::~L2CValue(aLStack304);
      lib::L2CValue::operator-(aLStack176);
      lib::L2CValue::L2CValue(aLStack304,_FIGHTER_LUCARIO_MACH_STATUS_WORK_ID_FLOAT_LAST_LR);
      fVar11 = (float)lib::L2CValue::as_number((L2CValue *)&local_150);
      iVar2 = lib::L2CValue::as_integer(aLStack304);
      app::lua_bind::WorkModule__set_float_impl
                (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),fVar11,iVar2);
      lib::L2CValue::~L2CValue(aLStack304);
      lib::L2CValue::~L2CValue((L2CValue *)&local_150);
      lib::L2CValue::L2CValue(aLStack304,_FIGHTER_LUCARIO_MACH_STATUS_WORK_ID_FLOAT_RUSH_VX);
      iVar2 = lib::L2CValue::as_integer(aLStack304);
      fVar11 = (float)app::lua_bind::WorkModule__get_float_impl
                                (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar2);
      lib::L2CValue::L2CValue((L2CValue *)&local_150,fVar11);
      lib::L2CValue::operator=(aLStack192,(L2CValue *)&local_150);
      lib::L2CValue::~L2CValue((L2CValue *)&local_150);
      lib::L2CValue::~L2CValue(aLStack304);
      lib::L2CValue::operator-(aLStack192);
      lib::L2CValue::L2CValue(aLStack304,_FIGHTER_LUCARIO_MACH_STATUS_WORK_ID_FLOAT_RUSH_VX);
      fVar11 = (float)lib::L2CValue::as_number((L2CValue *)&local_150);
      iVar2 = lib::L2CValue::as_integer(aLStack304);
      app::lua_bind::WorkModule__set_float_impl
                (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),fVar11,iVar2);
      lib::L2CValue::~L2CValue(aLStack304);
      lib::L2CValue::~L2CValue((L2CValue *)&local_150);
      lib::L2CValue::~L2CValue((L2CValue *)auStack288);
      lib::L2CValue::~L2CValue((L2CValue *)(auStack288 + 0x10));
    }
  }
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

