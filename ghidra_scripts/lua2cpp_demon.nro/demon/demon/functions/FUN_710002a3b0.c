
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710002a3b0(L2CValue *param_1,long param_2,L2CValue *param_3,L2CValue *param_4,
                   L2CValue *param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  SituationKind SVar5;
  int iVar6;
  uint uVar7;
  GroundCliffCheckKind GVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  L2CValue *this;
  ulong uVar13;
  uint in_stack_fffffffffffffed4;
  L2CValue aLStack248 [16];
  L2CValue aLStack232 [16];
  L2CValue aLStack216 [16];
  L2CValue aLStack200 [16];
  L2CValue aLStack184 [16];
  L2CValue aLStack168 [16];
  L2CValue aLStack152 [16];
  L2CValue aLStack136 [16];
  L2CValue aLStack120 [24];
  
  lib::L2CValue::L2CValue(aLStack136);
  this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_2 + 200),0x16);
  lib::L2CValue::L2CValue(aLStack120,_SITUATION_KIND_GROUND);
  uVar13 = lib::L2CValue::operator==(this,aLStack120);
  lib::L2CValue::~L2CValue(aLStack120);
  if ((uVar13 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack120,GROUND_CORRECT_KIND_AIR);
    lib::L2CValue::operator=(aLStack136,aLStack120);
  }
  else {
    lib::L2CValue::L2CValue(aLStack120,_GROUND_CORRECT_KIND_GROUND_CLIFF_STOP_ATTACK);
    lib::L2CValue::operator=(aLStack136,aLStack120);
  }
  lib::L2CValue::~L2CValue(aLStack120);
  lib::L2CValue::L2CValue(aLStack120,SITUATION_KIND_NONE);
  lib::L2CValue::L2CValue(aLStack152,FIGHTER_KINETIC_TYPE_UNIQ);
  lib::L2CValue::L2CValue(aLStack168,GROUND_CLIFF_CHECK_KIND_NONE);
  lib::L2CValue::L2CValue(aLStack184,true);
  lib::L2CValue::L2CValue(aLStack200,FIGHTER_STATUS_WORK_KEEP_FLAG_NONE_FLAG);
  lib::L2CValue::L2CValue(aLStack216,_FIGHTER_STATUS_WORK_KEEP_FLAG_NONE_INT);
  lib::L2CValue::L2CValue(aLStack232,FIGHTER_STATUS_WORK_KEEP_FLAG_NONE_FLOAT);
  lib::L2CValue::L2CValue(aLStack248,0);
  SVar5 = lib::L2CValue::as_integer(aLStack120);
  iVar6 = lib::L2CValue::as_integer(aLStack152);
  uVar7 = lib::L2CValue::as_integer(aLStack136);
  GVar8 = lib::L2CValue::as_integer(aLStack168);
  bVar1 = lib::L2CValue::as_bool(aLStack184);
  iVar9 = lib::L2CValue::as_integer(aLStack200);
  iVar10 = lib::L2CValue::as_integer(aLStack216);
  iVar11 = lib::L2CValue::as_integer(aLStack232);
  lib::L2CValue::as_integer(aLStack248);
  app::lua_bind::StatusModule__init_settings_impl
            (*(BattleObjectModuleAccessor **)(param_2 + 0x40),SVar5,iVar6,uVar7,GVar8,
             (bool)(bVar1 & 1),iVar9,iVar10,iVar11,in_stack_fffffffffffffed4);
  lib::L2CValue::~L2CValue(aLStack248);
  lib::L2CValue::~L2CValue(aLStack232);
  lib::L2CValue::~L2CValue(aLStack216);
  lib::L2CValue::~L2CValue(aLStack200);
  lib::L2CValue::~L2CValue(aLStack184);
  lib::L2CValue::~L2CValue(aLStack168);
  lib::L2CValue::~L2CValue(aLStack152);
  lib::L2CValue::~L2CValue(aLStack120);
  lib::L2CValue::L2CValue(aLStack120,false);
  lib::L2CValue::L2CValue(aLStack152,FIGHTER_TREADED_KIND_DISABLE);
  lib::L2CValue::L2CValue(aLStack168,false);
  lib::L2CValue::L2CValue(aLStack184,false);
  lib::L2CValue::L2CValue(aLStack200,false);
  lib::L2CValue::L2CValue(aLStack216,0);
  bVar1 = lib::L2CValue::as_bool(aLStack120);
  iVar6 = lib::L2CValue::as_integer(aLStack152);
  bVar2 = lib::L2CValue::as_bool(aLStack168);
  bVar3 = lib::L2CValue::as_bool(aLStack184);
  bVar4 = lib::L2CValue::as_bool(aLStack200);
  uVar13 = lib::L2CValue::as_integer(param_3);
  uVar7 = lib::L2CValue::as_integer(param_4);
  uVar12 = lib::L2CValue::as_integer(param_5);
  lib::L2CValue::as_integer(aLStack216);
  app::lua_bind::FighterStatusModuleImpl__set_fighter_status_data_impl
            (*(BattleObjectModuleAccessor **)(param_2 + 0x40),(bool)(bVar1 & 1),iVar6,
             (bool)(bVar2 & 1),(bool)(bVar3 & 1),(bool)(bVar4 & 1),uVar13,uVar7,uVar12,
             in_stack_fffffffffffffed4);
  lib::L2CValue::~L2CValue(aLStack216);
  lib::L2CValue::~L2CValue(aLStack200);
  lib::L2CValue::~L2CValue(aLStack184);
  lib::L2CValue::~L2CValue(aLStack168);
  lib::L2CValue::~L2CValue(aLStack152);
  lib::L2CValue::~L2CValue(aLStack120);
  lib::L2CValue::L2CValue(param_1,0);
  lib::L2CValue::~L2CValue(aLStack136);
  return;
}

