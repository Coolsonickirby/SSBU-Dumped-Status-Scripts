
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100228130(L2CValue *param_1,void *param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  ulong uVar6;
  float fVar7;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack112,_CONTROL_PAD_BUTTON_JUMP);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::ControlModule__check_button_trigger_impl
                    (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((bVar2 & 1U) == 0) {
    bVar1 = app::lua_bind::ControlModule__is_enable_flick_jump_impl
                      (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40));
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((bVar2 & 1U) != 0) {
      pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)((long)param_2 + 200),0x1b);
      lib::L2CValue::L2CValue(aLStack112,0x6e5ec7051);
      lib::L2CValue::L2CValue(aLStack160,0xcce8375ba);
      uVar5 = lib::L2CValue::as_integer(aLStack112);
      uVar6 = lib::L2CValue::as_integer(aLStack160);
      fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),uVar5,uVar6);
      lib::L2CValue::L2CValue(aLStack96,fVar7);
      uVar5 = lib::L2CValue::operator<=(aLStack96,pLVar4);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar5 & 1) != 0) {
        pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)((long)param_2 + 200),0x1d);
        lib::L2CValue::L2CValue(aLStack112,0x6e5ec7051);
        lib::L2CValue::L2CValue(aLStack160,0xc14e04625);
        uVar5 = lib::L2CValue::as_integer(aLStack112);
        uVar6 = lib::L2CValue::as_integer(aLStack160);
        iVar3 = app::lua_bind::WorkModule__get_param_int_impl
                          (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),uVar5,uVar6);
        lib::L2CValue::L2CValue(aLStack96,iVar3);
        uVar5 = lib::L2CValue::operator<(pLVar4,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack160);
        lib::L2CValue::~L2CValue(aLStack112);
        if ((uVar5 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack176,_FIGHTER_KIRBY_STATUS_KIND_SPECIAL_S_JUMP_SQUAT);
          lib::L2CValue::L2CValue(aLStack192,true);
          lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x50,(L2CValue)0x40);
          lib::L2CValue::~L2CValue(aLStack192);
          pLVar4 = aLStack176;
          goto LAB_71002281dc;
        }
      }
    }
    iVar3 = 0;
  }
  else {
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_KIRBY_STATUS_KIND_SPECIAL_S_JUMP_SQUAT);
    lib::L2CValue::L2CValue(aLStack144,true);
    lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x80,(L2CValue)0x70);
    lib::L2CValue::~L2CValue(aLStack144);
    pLVar4 = aLStack128;
LAB_71002281dc:
    lib::L2CValue::~L2CValue(pLVar4);
    iVar3 = 1;
  }
  lib::L2CValue::L2CValue(param_1,iVar3);
  return;
}

