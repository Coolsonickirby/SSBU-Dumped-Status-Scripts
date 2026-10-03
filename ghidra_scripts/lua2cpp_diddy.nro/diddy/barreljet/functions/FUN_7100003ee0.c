
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100003ee0(L2CValue *param_1,long param_2,L2CValue *param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  L2CValue *this;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_3);
  if ((bVar1 & 1U) == 0) goto LAB_7100004260;
  lib::L2CValue::L2CValue(aLStack64,_WEAPON_DIDDY_BARRELJET_STATUS_WORK_INT_FLY_CONTROL_FRAME);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  iVar2 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
  lib::L2CValue::L2CValue(aLStack80,iVar2);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0);
  uVar4 = lib::L2CValue::operator<(aLStack64,aLStack80);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,_WEAPON_DIDDY_BARRELJET_STATUS_WORK_INT_FLY_NO_CONTROL_FRAME);
    iVar2 = lib::L2CValue::as_integer(aLStack64);
    iVar2 = app::lua_bind::WorkModule__get_int_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
    lib::L2CValue::L2CValue(aLStack96,iVar2);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,0);
    uVar4 = lib::L2CValue::operator<(aLStack64,aLStack96);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack64,1);
      lib::L2CValue::operator-(aLStack96,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::operator=(aLStack96,aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::L2CValue
                (aLStack64,_WEAPON_DIDDY_BARRELJET_STATUS_WORK_INT_FLY_NO_CONTROL_FRAME);
      iVar2 = lib::L2CValue::as_integer(aLStack96);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__set_int_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2,iVar3);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,0);
      uVar4 = lib::L2CValue::operator==(aLStack96,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack112,0xf0314e83e);
        lib::L2CValue::L2CValue(aLStack128,0x1183992e4e);
        uVar4 = lib::L2CValue::as_integer(aLStack112);
        uVar5 = lib::L2CValue::as_integer(aLStack128);
        iVar2 = app::lua_bind::WorkModule__get_param_int_impl
                          (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar4,uVar5);
        lib::L2CValue::L2CValue(aLStack64,iVar2);
        lib::L2CValue::L2CValue
                  (aLStack144,_WEAPON_DIDDY_BARRELJET_STATUS_WORK_INT_FLY_CONTROL_FRAME);
        iVar2 = lib::L2CValue::as_integer(aLStack64);
        iVar3 = lib::L2CValue::as_integer(aLStack144);
        app::lua_bind::WorkModule__set_int_impl
                  (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2,iVar3);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::~L2CValue(aLStack64);
        this = aLStack128;
        goto LAB_7100004244;
      }
    }
LAB_7100004250:
    lib::L2CValue::~L2CValue(aLStack96);
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,1);
    lib::L2CValue::operator-(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::operator=(aLStack80,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack64,_WEAPON_DIDDY_BARRELJET_STATUS_WORK_INT_FLY_CONTROL_FRAME);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__set_int_impl
              (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2,iVar3);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,0);
    uVar4 = lib::L2CValue::operator==(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack96,0xf0314e83e);
      lib::L2CValue::L2CValue(aLStack112,0x14edd66ecc);
      uVar4 = lib::L2CValue::as_integer(aLStack96);
      uVar5 = lib::L2CValue::as_integer(aLStack112);
      iVar2 = app::lua_bind::WorkModule__get_param_int_impl
                        (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar4,uVar5);
      lib::L2CValue::L2CValue(aLStack64,iVar2);
      lib::L2CValue::L2CValue
                (aLStack128,_WEAPON_DIDDY_BARRELJET_STATUS_WORK_INT_FLY_NO_CONTROL_FRAME);
      iVar2 = lib::L2CValue::as_integer(aLStack64);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      app::lua_bind::WorkModule__set_int_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2,iVar3);
      lib::L2CValue::~L2CValue(aLStack128);
      this = aLStack64;
LAB_7100004244:
      lib::L2CValue::~L2CValue(this);
      lib::L2CValue::~L2CValue(aLStack112);
      goto LAB_7100004250;
    }
  }
  lib::L2CValue::~L2CValue(aLStack80);
LAB_7100004260:
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

