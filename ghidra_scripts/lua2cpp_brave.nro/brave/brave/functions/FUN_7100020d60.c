
void FUN_7100020d60(L2CValue *param_1,L2CValue *param_2,L2CValue *param_3)

{
  bool bVar1;
  int iVar2;
  L2CValue *pLVar3;
  
  if ((((byte)app::lua_bind::MotionModule__set_rate_impl & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(app::lua_bind::MotionModule__set_rate_impl), iVar2 != 0)) {
    FUN_71000234c0();
    FUN_7100000300(lib::L2CValue::~L2CValue,app::lua_bind::BattleObjectSlow__rate_request_impl,
                   &PTR_LOOP_71002d6000);
    __cxa_guard_release(app::lua_bind::MotionModule__set_rate_impl);
  }
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_3);
  pLVar3 = (L2CValue *)
           lib::L2CValue::operator[]
                     ((L2CValue *)app::lua_bind::BattleObjectSlow__rate_request_impl,param_2);
  if ((bVar1 & 1U) == 0) {
    iVar2 = 2;
  }
  else {
    iVar2 = 1;
  }
  pLVar3 = (L2CValue *)lib::L2CValue::operator[](pLVar3,iVar2);
  lib::L2CValue::L2CValue(param_1,pLVar3);
  return;
}

