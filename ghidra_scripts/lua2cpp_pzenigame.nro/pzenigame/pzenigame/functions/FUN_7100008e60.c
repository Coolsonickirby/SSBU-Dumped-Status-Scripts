
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100008e60(L2CAgent *param_1,long param_2)

{
  int iVar1;
  L2CValue *pLVar2;
  ulong uVar3;
  float fVar4;
  undefined8 uVar5;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue((L2CValue *)param_1);
  lib::L2CValue::L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack112,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
  iVar1 = lib::L2CValue::as_integer(aLStack112);
  uVar5 = app::lua_bind::KineticModule__get_sum_speed_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack96,(float)uVar5);
  lib::L2CValue::L2CValue(aLStack80,(float)((ulong)uVar5 >> 0x20));
  lib::L2CValue::operator=((L2CValue *)param_1,aLStack96);
  lib::L2CValue::operator=(aLStack64,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,0xfea97fe73);
  lib::L2CValue::L2CValue(aLStack128,0x10fe6400a9);
  pLVar2 = (L2CValue *)lib::L2CValue::as_integer(aLStack112);
  uVar3 = lib::L2CValue::as_integer(aLStack128);
  fVar4 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (*(BattleObjectModuleAccessor **)(param_2 + 0x40),(ulong)pLVar2,uVar3);
  lib::L2CValue::L2CValue(aLStack96,fVar4);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CAgent::math_abs(param_1,pLVar2);
  lib::L2CValue::operator*(aLStack96,aLStack128);
  fVar4 = (float)lib::L2CValue::as_number(aLStack112);
  app::lua_bind::AttackModule__set_power_add_status_impl
            (*(BattleObjectModuleAccessor **)(param_2 + 0x40),fVar4);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}

