
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100027240(L2CValue *param_1,void *param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  ulong uVar6;
  float fVar7;
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack128,_CONTROL_PAD_BUTTON_JUMP);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  bVar1 = app::lua_bind::ControlModule__check_button_trigger_impl
                    (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack112);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
LAB_7100027334:
    fVar7 = (float)app::lua_bind::ControlModule__get_stick_y_impl
                             (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40));
    lib::L2CValue::L2CValue(aLStack112,fVar7);
    lib::L2CValue::L2CValue(aLStack176,0x6e5ec7051);
    lib::L2CValue::L2CValue(aLStack192,0xcce8375ba);
    uVar5 = lib::L2CValue::as_integer(aLStack176);
    uVar6 = lib::L2CValue::as_integer(aLStack192);
    fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),uVar5,uVar6);
    lib::L2CValue::L2CValue(aLStack128,fVar7);
    uVar5 = lib::L2CValue::operator<=(aLStack128,aLStack112);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack112);
    }
    else {
      pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)((long)param_2 + 200),0x1d);
      lib::L2CValue::L2CValue(aLStack224,0x6e5ec7051);
      lib::L2CValue::L2CValue(aLStack240,0xc14e04625);
      uVar5 = lib::L2CValue::as_integer(aLStack224);
      uVar6 = lib::L2CValue::as_integer(aLStack240);
      iVar3 = app::lua_bind::WorkModule__get_param_int_impl
                        (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),uVar5,uVar6);
      lib::L2CValue::L2CValue(aLStack208,iVar3);
      uVar5 = lib::L2CValue::operator<(pLVar4,aLStack208);
      if ((uVar5 & 1) == 0) {
        uVar5 = 0;
      }
      else {
        pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)((long)param_2 + 200),0x16);
        lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
        uVar5 = lib::L2CValue::operator==(pLVar4,aLStack96);
        uVar5 = uVar5 & 0xffffffff;
        lib::L2CValue::~L2CValue(aLStack96);
      }
      lib::L2CValue::~L2CValue(aLStack208);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::~L2CValue(aLStack224);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar5 & 1) != 0) {
        bVar1 = app::lua_bind::ControlModule__is_enable_flick_jump_impl
                          (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40));
        lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        if ((bVar2 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack256,_FIGHTER_DONKEY_STATUS_KIND_SUPER_LIFT_JUMP_SQUAT);
          lib::L2CValue::L2CValue(aLStack272,true);
          lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x0,(L2CValue)0xf0);
          lib::L2CValue::~L2CValue(aLStack272);
          pLVar4 = aLStack256;
          goto LAB_7100027520;
        }
      }
    }
    iVar3 = 0;
  }
  else {
    pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)((long)param_2 + 200),0x16);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator==(pLVar4,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((uVar5 & 1) == 0) goto LAB_7100027334;
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_DONKEY_STATUS_KIND_SUPER_LIFT_JUMP_SQUAT_B);
    lib::L2CValue::L2CValue(aLStack160,true);
    lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x70,(L2CValue)0x60);
    lib::L2CValue::~L2CValue(aLStack160);
    pLVar4 = aLStack144;
LAB_7100027520:
    lib::L2CValue::~L2CValue(pLVar4);
    iVar3 = 1;
  }
  lib::L2CValue::L2CValue(param_1,iVar3);
  return;
}

