
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001d9c0(long param_1,undefined8 param_2,L2CValue *param_3)

{
  uint uVar1;
  int iVar2;
  L2CValue *pLVar3;
  float fVar4;
  undefined8 uVar5;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  undefined auStack128 [32];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue((L2CValue *)&stack0xffffffffffffffc0);
  lib::L2CValue::L2CValue(aLStack80);
  lib::L2CValue::L2CValue((L2CValue *)auStack128,GROUND_TOUCH_FLAG_DOWN);
  uVar1 = lib::L2CValue::as_integer((L2CValue *)auStack128);
  uVar5 = app::lua_bind::GroundModule__get_touch_normal_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar1);
  lib::L2CValue::L2CValue((L2CValue *)(auStack128 + 0x10),(float)uVar5);
  lib::L2CValue::L2CValue(aLStack96,(float)((ulong)uVar5 >> 0x20));
  lib::L2CValue::operator=((L2CValue *)&stack0xffffffffffffffc0,(L2CValue *)(auStack128 + 0x10));
  lib::L2CValue::operator=(aLStack80,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack128 + 0x10));
  lib::L2CValue::~L2CValue((L2CValue *)auStack128);
  pLVar3 = aLStack80;
  lib::L2CAgent::math_atan((L2CAgent *)&stack0xffffffffffffffc0,pLVar3,param_3);
  lib::L2CAgent::math_deg((L2CAgent *)auStack128,pLVar3);
  lib::L2CValue::L2CValue((L2CValue *)(auStack128 + 0x10),0.0);
  lib::L2CValue::operator+(aLStack144,(L2CValue *)(auStack128 + 0x10));
  lib::L2CValue::~L2CValue((L2CValue *)(auStack128 + 0x10));
  lib::L2CValue::L2CValue
            ((L2CValue *)(auStack128 + 0x10),
             _FIGHTER_RIDLEY_STATUS_SPECIAL_S_WORK_FLOAT_GROUND_DEGREE);
  fVar4 = (float)lib::L2CValue::as_number(aLStack160);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)(auStack128 + 0x10));
  app::lua_bind::WorkModule__set_float_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar4,iVar2);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack128 + 0x10));
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::L2CValue((L2CValue *)(auStack128 + 0x10),0.0);
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_RIDLEY_STATUS_SPECIAL_S_WORK_FLOAT_SPEED_DEGREE);
  fVar4 = (float)lib::L2CValue::as_number((L2CValue *)(auStack128 + 0x10));
  iVar2 = lib::L2CValue::as_integer(aLStack160);
  app::lua_bind::WorkModule__set_float_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar4,iVar2);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack128 + 0x10));
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue((L2CValue *)auStack128);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue((L2CValue *)&stack0xffffffffffffffc0);
  return;
}

