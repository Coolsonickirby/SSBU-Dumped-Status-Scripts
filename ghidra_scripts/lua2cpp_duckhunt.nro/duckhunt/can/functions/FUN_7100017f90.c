
void FUN_7100017f90(long param_1,undefined8 param_2,L2CValue *param_3)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  float fVar6;
  undefined8 uVar7;
  long lVar8;
  L2CValue aLStack208 [16];
  undefined auStack192 [32];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  void **local_70;
  lua_State *plStack104;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,GROUND_TOUCH_FLAG_DOWN);
  uVar3 = lib::L2CValue::as_integer(aLStack80);
  bVar1 = app::lua_bind::GroundModule__is_touch_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar3);
  lib::L2CValue::L2CValue((L2CValue *)&stack0xffffffffffffffc0,(bool)(bVar1 & 1));
  lib::L2CValue::operator!((L2CValue *)&stack0xffffffffffffffc0);
  bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_70);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  lib::L2CValue::~L2CValue((L2CValue *)&stack0xffffffffffffffc0);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((bVar2 & 1U) != 0) {
    return;
  }
  lib::L2CValue::L2CValue((L2CValue *)&stack0xffffffffffffffc0);
  lib::L2CValue::L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack128,GROUND_TOUCH_FLAG_DOWN);
  uVar3 = lib::L2CValue::as_integer(aLStack128);
  uVar7 = app::lua_bind::GroundModule__get_touch_normal_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,(float)uVar7);
  lib::L2CValue::L2CValue(aLStack96,(float)((ulong)uVar7 >> 0x20));
  lib::L2CValue::operator=((L2CValue *)&stack0xffffffffffffffc0,(L2CValue *)&local_70);
  lib::L2CValue::operator=(aLStack80,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CAgent::math_atan((L2CAgent *)&stack0xffffffffffffffc0,aLStack80,param_3);
  fVar6 = (float)app::lua_bind::PostureModule__lr_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
  lib::L2CValue::L2CValue(aLStack160,fVar6);
  pLVar5 = aLStack160;
  lib::L2CValue::operator*(aLStack144,pLVar5);
  lib::L2CAgent::math_deg((L2CAgent *)&local_70,pLVar5);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  fVar6 = (float)app::lua_bind::PostureModule__rot_x_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40),0);
  lib::L2CValue::L2CValue(aLStack144,fVar6);
  pLVar5 = aLStack128;
  lib::L2CValue::operator-(aLStack144,pLVar5);
  lib::L2CAgent::math_abs((L2CAgent *)auStack192,pLVar5);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,360.0);
  lib::L2CValue::operator%((L2CValue *)(auStack192 + 0x10),(L2CValue *)&local_70);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack192 + 0x10));
  lib::L2CValue::~L2CValue((L2CValue *)auStack192);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,90.0);
  uVar4 = lib::L2CValue::operator<(aLStack160,(L2CValue *)&local_70);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_70,270.0);
    uVar4 = lib::L2CValue::operator<=((L2CValue *)&local_70,aLStack160);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_70,180.0);
      lib::L2CValue::operator+(aLStack128,(L2CValue *)&local_70);
      lib::L2CValue::~L2CValue((L2CValue *)&local_70);
      lib::L2CValue::L2CValue((L2CValue *)auStack192,0.0);
      lib::L2CValue::L2CValue(aLStack208,0.0);
      uVar4 = lib::L2CValue::as_number((L2CValue *)(auStack192 + 0x10));
      lVar8 = lib::L2CValue::as_number((L2CValue *)auStack192);
      uVar3 = lib::L2CValue::as_number(aLStack208);
      local_70 = (void **)(uVar4 & 0xffffffff | lVar8 << 0x20);
      plStack104 = (lua_State *)(ulong)uVar3;
      app::lua_bind::PostureModule__set_rot_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),(Vector3f *)&local_70,0);
      lib::L2CValue::~L2CValue(aLStack208);
      goto LAB_71000182a8;
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)(auStack192 + 0x10),0.0);
  lib::L2CValue::L2CValue((L2CValue *)auStack192,0.0);
  uVar4 = lib::L2CValue::as_number(aLStack128);
  lVar8 = lib::L2CValue::as_number((L2CValue *)(auStack192 + 0x10));
  uVar3 = lib::L2CValue::as_number((L2CValue *)auStack192);
  local_70 = (void **)(uVar4 & 0xffffffff | lVar8 << 0x20);
  plStack104 = (lua_State *)(ulong)uVar3;
  app::lua_bind::PostureModule__set_rot_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),(Vector3f *)&local_70,0);
LAB_71000182a8:
  lib::L2CValue::~L2CValue((L2CValue *)auStack192);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack192 + 0x10));
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue((L2CValue *)&stack0xffffffffffffffc0);
  return;
}

