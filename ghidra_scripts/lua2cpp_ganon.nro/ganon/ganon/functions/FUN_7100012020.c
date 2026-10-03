
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100012020(long param_1)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  Hash40 HVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  long lVar9;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  ulong local_40;
  ulong uStack56;
  
  lib::L2CValue::L2CValue(aLStack80,0);
  FUN_7100010b20(param_1);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_40);
  app::lua_bind::KineticModule__change_kinetic_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
  lib::L2CValue::~L2CValue((L2CValue *)&local_40);
  lib::L2CValue::L2CValue(aLStack96,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack112,0x207b183de1);
  uVar3 = lib::L2CValue::as_integer(aLStack96);
  uVar4 = lib::L2CValue::as_integer(aLStack112);
  fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar3,uVar4);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,fVar6);
  lib::L2CValue::operator=(aLStack80,(L2CValue *)&local_40);
  lib::L2CValue::~L2CValue((L2CValue *)&local_40);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,0x12aaf01d6d);
  lib::L2CValue::L2CValue(aLStack96,0.0);
  lib::L2CValue::L2CValue(aLStack112,false);
  HVar5 = lib::L2CValue::as_hash((L2CValue *)&local_40);
  fVar6 = (float)lib::L2CValue::as_number(aLStack96);
  fVar7 = (float)lib::L2CValue::as_number(aLStack80);
  bVar1 = lib::L2CValue::as_bool(aLStack112);
  app::lua_bind::MotionModule__change_motion_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar5,fVar6,fVar7,(bool)(bVar1 & 1),
             0.0,false,false);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue((L2CValue *)&local_40);
  lib::L2CValue::L2CValue(aLStack96,0.0);
  lib::L2CValue::L2CValue(aLStack112,1.0);
  lib::L2CValue::L2CValue(aLStack128,1.0);
  uVar3 = lib::L2CValue::as_number(aLStack96);
  lVar9 = lib::L2CValue::as_number(aLStack112);
  uVar8 = lib::L2CValue::as_number(aLStack128);
  local_40 = uVar3 & 0xffffffff | lVar9 << 0x20;
  uStack56 = (ulong)uVar8;
  app::lua_bind::KineticModule__mul_speed_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),(Vector3f *)&local_40,-1);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

