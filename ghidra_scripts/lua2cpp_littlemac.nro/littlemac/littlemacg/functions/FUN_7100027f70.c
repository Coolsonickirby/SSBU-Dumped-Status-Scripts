
void FUN_7100027f70(long param_1)

{
  L2CValue *this;
  BattleObjectModuleAccessor *pBVar1;
  L2CValue *pLVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  void **ppvStack48;
  lua_State *plStack40;
  
  pLVar2 = (L2CValue *)0x5;
  this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),5);
  pBVar1 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(this);
  fVar3 = (float)app::SlopeModuleSimple::gravity_angle(pBVar1);
  lib::L2CValue::L2CValue((L2CValue *)&stack0xffffffffffffffd0,fVar3);
  lib::L2CAgent::math_deg((L2CAgent *)&stack0xffffffffffffffd0,pLVar2);
  lib::L2CValue::~L2CValue((L2CValue *)&stack0xffffffffffffffd0);
  lib::L2CValue::L2CValue(aLStack80,0.0);
  lib::L2CValue::L2CValue(aLStack96,0.0);
  uVar4 = lib::L2CValue::as_number(aLStack80);
  uVar5 = lib::L2CValue::as_number(aLStack96);
  uVar6 = lib::L2CValue::as_number(aLStack64);
  ppvStack48 = (void **)CONCAT44(uVar5,uVar4);
  plStack40 = (lua_State *)(ulong)uVar6;
  app::lua_bind::PostureModule__set_rot_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),(Vector3f *)&stack0xffffffffffffffd0,0
            );
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}

