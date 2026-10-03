
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000241c0(L2CValue *param_1,void *param_2)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  float fVar8;
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  pLVar7 = (L2CValue *)((long)param_2 + 200);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](pLVar7,0x16);
  lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
  uVar5 = lib::L2CValue::operator==(pLVar4,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar5 & 1) != 0) {
    pLVar4 = (L2CValue *)lib::L2CValue::operator[](pLVar7,0x1f);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_FLAG_JUMP_TRIGGER);
    lib::L2CValue::operator&(pLVar4,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_GAMEWATCH_STATUS_KIND_FINAL_JUMP_SQUAT);
      lib::L2CValue::L2CValue(aLStack128,false);
      lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x90,(L2CValue)0x80);
      lib::L2CValue::~L2CValue(aLStack128);
      pLVar7 = aLStack112;
LAB_71000242a8:
      lib::L2CValue::~L2CValue(pLVar7);
      iVar3 = 1;
      goto LAB_7100024460;
    }
    pLVar4 = (L2CValue *)lib::L2CValue::operator[](pLVar7,0x1b);
    lib::L2CValue::L2CValue(aLStack96,0x6e5ec7051);
    lib::L2CValue::L2CValue(aLStack144,0xcce8375ba);
    uVar5 = lib::L2CValue::as_integer(aLStack96);
    uVar6 = lib::L2CValue::as_integer(aLStack144);
    fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),uVar5,uVar6);
    lib::L2CValue::L2CValue(aLStack80,fVar8);
    uVar5 = lib::L2CValue::operator<=(aLStack80,pLVar4);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack96);
    }
    else {
      pLVar7 = (L2CValue *)lib::L2CValue::operator[](pLVar7,0x1d);
      lib::L2CValue::L2CValue(aLStack176,0x6e5ec7051);
      lib::L2CValue::L2CValue(aLStack192,0xc14e04625);
      uVar5 = lib::L2CValue::as_integer(aLStack176);
      uVar6 = lib::L2CValue::as_integer(aLStack192);
      iVar3 = app::lua_bind::WorkModule__get_param_int_impl
                        (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),uVar5,uVar6);
      lib::L2CValue::L2CValue(aLStack160,iVar3);
      uVar5 = lib::L2CValue::operator<(pLVar7,aLStack160);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar5 & 1) != 0) {
        bVar2 = app::lua_bind::ControlModule__is_enable_flick_jump_impl
                          (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40));
        lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
        bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        if ((bVar1 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack208,_FIGHTER_GAMEWATCH_STATUS_KIND_FINAL_JUMP_SQUAT);
          lib::L2CValue::L2CValue(aLStack224,false);
          lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x30,(L2CValue)0x20);
          lib::L2CValue::~L2CValue(aLStack224);
          pLVar7 = aLStack208;
          goto LAB_71000242a8;
        }
      }
    }
  }
  iVar3 = 0;
LAB_7100024460:
  lib::L2CValue::L2CValue(param_1,iVar3);
  return;
}

