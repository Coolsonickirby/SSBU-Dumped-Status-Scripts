
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100029ec0(L2CAgent *param_1)

{
  BattleObject **this;
  byte bVar1;
  bool bVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  this = &param_1[2].battleObject;
  pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0xb);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_NONE);
  uVar5 = lib::L2CValue::operator==(pLVar4,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar5 & 1) == 0) {
    pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0xb);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_GAMEWATCH_STATUS_KIND_SPECIAL_LW_WAIT);
    uVar5 = lib::L2CValue::operator==(pLVar4,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar5 & 1) == 0) {
      pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0xb);
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_GAMEWATCH_STATUS_KIND_SPECIAL_LW_CATCH);
      uVar5 = lib::L2CValue::operator==(pLVar4,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar5 & 1) == 0) {
        pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0xb);
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_GAMEWATCH_STATUS_KIND_SPECIAL_LW_REFLECT);
        uVar5 = lib::L2CValue::operator==(pLVar4,aLStack64);
        lib::L2CValue::~L2CValue(aLStack64);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_GAMEWATCH_INSTANCE_WORK_ID_FLAG_CHARGE_MAX);
          iVar3 = lib::L2CValue::as_integer(aLStack96);
          bVar1 = app::lua_bind::WorkModule__is_flag_impl(param_1->moduleAccessor,iVar3);
          lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
          bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
          if ((bVar2 & 1U) == 0) {
            lib::L2CValue::~L2CValue(aLStack80);
            pLVar4 = aLStack96;
          }
          else {
            lib::L2CValue::L2CValue
                      (aLStack128,_FIGHTER_GAMEWATCH_STATUS_SPECIAL_LW_WORK_INT_OIL_FRAME_3);
            iVar3 = lib::L2CValue::as_integer(aLStack128);
            iVar3 = app::lua_bind::WorkModule__get_int_impl(param_1->moduleAccessor,iVar3);
            lib::L2CValue::L2CValue(aLStack112,iVar3);
            lib::L2CValue::L2CValue(aLStack64,0);
            uVar5 = lib::L2CValue::operator<(aLStack64,aLStack112);
            lib::L2CValue::~L2CValue(aLStack64);
            lib::L2CValue::~L2CValue(aLStack112);
            lib::L2CValue::~L2CValue(aLStack128);
            lib::L2CValue::~L2CValue(aLStack80);
            lib::L2CValue::~L2CValue(aLStack96);
            if ((uVar5 & 1) == 0) {
              return;
            }
            lib::L2CValue::L2CValue(aLStack64,_MA_MSC_CMD_EFFECT_EFFECT_COMMON);
            lib::L2CValue::L2CValue(aLStack80,0xaec2db62e);
            lib::L2CAgent::clear_lua_stack(param_1);
            lib::L2CAgent::push_lua_stack(param_1,aLStack64);
            lib::L2CAgent::push_lua_stack(param_1,aLStack80);
            app::sv_module_access::effect(param_1->luaStateAgent);
            lib::L2CAgent::pop_lua_stack(param_1,1);
            lib::L2CValue::~L2CValue(aLStack144);
            lib::L2CValue::~L2CValue(aLStack80);
            pLVar4 = aLStack64;
          }
          lib::L2CValue::~L2CValue(pLVar4);
        }
      }
    }
  }
  return;
}

