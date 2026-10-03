
void FUN_7100003500(long param_1,L2CValue *param_2,L2CValue *param_3,L2CValue *param_4)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  iVar1 = lib::L2CValue::as_integer(param_2);
  fVar2 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack80,fVar2);
  iVar1 = lib::L2CValue::as_integer(param_3);
  fVar2 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack96,fVar2);
  iVar1 = lib::L2CValue::as_integer(param_4);
  fVar2 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack112,fVar2);
  fVar2 = (float)lib::L2CValue::as_number(aLStack80);
  fVar3 = (float)lib::L2CValue::as_number(aLStack96);
  fVar4 = (float)lib::L2CValue::as_number(aLStack112);
  app::lua_bind::EffectModule__set_rgb_partial_last_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar2,fVar3,fVar4);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

