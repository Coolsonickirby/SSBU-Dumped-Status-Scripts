
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000212d0(L2CValue *param_1,long param_2)

{
  byte bVar1;
  int iVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  ulong uVar5;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_2 + 200),0x17);
  lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
  uVar4 = lib::L2CValue::operator==(pLVar3,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar4 & 1) == 0) {
    pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_2 + 200),0x16);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar4 = lib::L2CValue::operator==(pLVar3,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_JACK_STATUS_SPECIAL_N_FLAG_BARRAGE_LW);
      iVar2 = lib::L2CValue::as_integer(aLStack128);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl
                        (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack80,true);
      uVar4 = lib::L2CValue::operator==(aLStack112,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack128);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack112,0xf899192aa);
        lib::L2CValue::L2CValue(aLStack128,0x1574338e2d);
        uVar4 = lib::L2CValue::as_integer(aLStack112);
        uVar5 = lib::L2CValue::as_integer(aLStack128);
        iVar2 = app::lua_bind::WorkModule__get_param_int_impl
                          (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar4,uVar5);
        lib::L2CValue::L2CValue(aLStack80,iVar2);
        lib::L2CValue::operator=(aLStack96,aLStack80);
      }
      else {
        lib::L2CValue::L2CValue(aLStack112,0xf899192aa);
        lib::L2CValue::L2CValue(aLStack128,0x1c9753a0e0);
        uVar4 = lib::L2CValue::as_integer(aLStack112);
        uVar5 = lib::L2CValue::as_integer(aLStack128);
        iVar2 = app::lua_bind::WorkModule__get_param_int_impl
                          (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar4,uVar5);
        lib::L2CValue::L2CValue(aLStack80,iVar2);
        lib::L2CValue::operator=(aLStack96,aLStack80);
      }
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack144,aLStack96);
      FUN_71000215d0(param_2,aLStack144);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::L2CValue(param_1,true);
      lib::L2CValue::~L2CValue(aLStack96);
      return;
    }
  }
  lib::L2CValue::L2CValue(param_1,false);
  return;
}

