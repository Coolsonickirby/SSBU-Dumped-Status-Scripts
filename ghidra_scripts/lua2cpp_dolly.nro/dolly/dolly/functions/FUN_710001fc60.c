
void FUN_710001fc60(L2CValue *param_1,long param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  L2CValue *this;
  ulong uVar5;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40));
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack64,false);
  uVar4 = lib::L2CValue::operator==(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar4 & 1) != 0) {
    this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_2 + 200),0xe);
    lib::L2CValue::L2CValue(aLStack80,0xdf05c072b);
    lib::L2CValue::L2CValue(aLStack96,0x192c9d0740);
    uVar4 = lib::L2CValue::as_integer(aLStack80);
    uVar5 = lib::L2CValue::as_integer(aLStack96);
    iVar3 = app::lua_bind::WorkModule__get_param_int_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar4,uVar5);
    lib::L2CValue::L2CValue(aLStack64,iVar3);
    uVar4 = lib::L2CValue::operator<=(this,aLStack64);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack80);
    }
    else {
      FUN_710001fe10(aLStack112,param_2);
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((bVar2 & 1U) != 0) {
        iVar3 = 1;
        goto LAB_710001fda0;
      }
    }
  }
  iVar3 = 0;
LAB_710001fda0:
  lib::L2CValue::L2CValue(param_1,iVar3);
  return;
}

