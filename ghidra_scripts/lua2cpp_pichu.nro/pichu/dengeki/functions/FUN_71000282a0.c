
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000282a0(void *param_1,undefined8 param_2,L2CValue *param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  undefined8 uVar6;
  L2CValue aLStack528 [16];
  L2CValue aLStack512 [16];
  L2CValue aLStack496 [16];
  L2CValue aLStack480 [16];
  L2CValue aLStack464 [16];
  L2CValue aLStack448 [16];
  L2CValue aLStack432 [16];
  L2CValue aLStack416 [16];
  L2CValue aLStack400 [16];
  L2CValue aLStack384 [16];
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  undefined auStack144 [32];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue((L2CValue *)(auStack144 + 0x10),0);
  lib::L2CValue::L2CValue((L2CValue *)auStack144,0);
  iVar2 = app::lua_bind::GroundModule__get_touch_flag_impl
                    (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40));
  lib::L2CValue::L2CValue(aLStack64,iVar2);
  lib::L2CValue::operator=(aLStack96,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0);
  uVar4 = lib::L2CValue::operator==(aLStack96,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar4 & 1) != 0) goto LAB_7100028a58;
  lib::L2CValue::L2CValue(aLStack64,GROUND_TOUCH_FLAG_DOWN);
  lib::L2CValue::operator&(aLStack96,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((bVar1 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack64,_GROUND_TOUCH_FLAG_UP);
    lib::L2CValue::operator&(aLStack96,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack208,_GROUND_TOUCH_FLAG_UP);
      uVar3 = lib::L2CValue::as_integer(aLStack208);
      uVar6 = app::lua_bind::GroundModule__get_touch_normal_impl
                        (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar3);
      lib::L2CValue::L2CValue(aLStack240,(float)uVar6);
      lib::L2CValue::L2CValue(aLStack224,(float)((ulong)uVar6 >> 0x20));
      lib::L2CValue::L2CValue(aLStack64,aLStack240);
      lib::L2CValue::L2CValue(aLStack80,aLStack224);
      param_3 = aLStack80;
      lua2cpp::L2CFighterBase::Vector2__create(param_1,(L2CValue)0xc0,SUB81(param_3,0));
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack224);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::~L2CValue(aLStack208);
      pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x18cdc1683);
      lib::L2CValue::operator=(aLStack112,pLVar5);
      pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x1fbdb2615);
      lib::L2CValue::operator=((L2CValue *)(auStack144 + 0x10),pLVar5);
      goto LAB_71000287ac;
    }
    lib::L2CValue::L2CValue(aLStack64,_GROUND_TOUCH_FLAG_LEFT);
    lib::L2CValue::operator&(aLStack96,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack208,_GROUND_TOUCH_FLAG_LEFT);
      uVar3 = lib::L2CValue::as_integer(aLStack208);
      uVar6 = app::lua_bind::GroundModule__get_touch_normal_impl
                        (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar3);
      lib::L2CValue::L2CValue(aLStack272,(float)uVar6);
      lib::L2CValue::L2CValue(aLStack256,(float)((ulong)uVar6 >> 0x20));
      lib::L2CValue::L2CValue(aLStack64,aLStack272);
      lib::L2CValue::L2CValue(aLStack80,aLStack256);
      param_3 = aLStack80;
      lua2cpp::L2CFighterBase::Vector2__create(param_1,(L2CValue)0xc0,SUB81(param_3,0));
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack256);
      lib::L2CValue::~L2CValue(aLStack272);
      lib::L2CValue::~L2CValue(aLStack208);
      pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x18cdc1683);
      lib::L2CValue::operator=(aLStack112,pLVar5);
      pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x1fbdb2615);
      lib::L2CValue::operator=((L2CValue *)(auStack144 + 0x10),pLVar5);
      goto LAB_71000287ac;
    }
    lib::L2CValue::L2CValue(aLStack64,GROUND_TOUCH_FLAG_RIGHT);
    lib::L2CValue::operator&(aLStack96,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack208,GROUND_TOUCH_FLAG_RIGHT);
      uVar3 = lib::L2CValue::as_integer(aLStack208);
      uVar6 = app::lua_bind::GroundModule__get_touch_normal_impl
                        (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar3);
      lib::L2CValue::L2CValue(aLStack304,(float)uVar6);
      lib::L2CValue::L2CValue(aLStack288,(float)((ulong)uVar6 >> 0x20));
      lib::L2CValue::L2CValue(aLStack64,aLStack304);
      lib::L2CValue::L2CValue(aLStack80,aLStack288);
      param_3 = aLStack80;
      lua2cpp::L2CFighterBase::Vector2__create(param_1,(L2CValue)0xc0,SUB81(param_3,0));
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack288);
      lib::L2CValue::~L2CValue(aLStack304);
      lib::L2CValue::~L2CValue(aLStack208);
      pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x18cdc1683);
      lib::L2CValue::operator=(aLStack112,pLVar5);
      pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x1fbdb2615);
      lib::L2CValue::operator=((L2CValue *)(auStack144 + 0x10),pLVar5);
      goto LAB_71000287ac;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack208,GROUND_TOUCH_FLAG_DOWN);
    uVar3 = lib::L2CValue::as_integer(aLStack208);
    uVar6 = app::lua_bind::GroundModule__get_touch_normal_impl
                      (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar3);
    lib::L2CValue::L2CValue(aLStack192,(float)uVar6);
    lib::L2CValue::L2CValue(aLStack176,(float)((ulong)uVar6 >> 0x20));
    lib::L2CValue::L2CValue(aLStack64,aLStack192);
    lib::L2CValue::L2CValue(aLStack80,aLStack176);
    param_3 = aLStack80;
    lua2cpp::L2CFighterBase::Vector2__create(param_1,(L2CValue)0xc0,SUB81(param_3,0));
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack208);
    pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x18cdc1683);
    lib::L2CValue::operator=(aLStack112,pLVar5);
    pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x1fbdb2615);
    lib::L2CValue::operator=((L2CValue *)(auStack144 + 0x10),pLVar5);
LAB_71000287ac:
    lib::L2CValue::~L2CValue(aLStack160);
  }
  lib::L2CValue::operator-(aLStack112);
  lib::L2CAgent::math_atan((L2CAgent *)aLStack80,(L2CValue *)(auStack144 + 0x10),param_3);
  pLVar5 = aLStack64;
  lib::L2CValue::operator=((L2CValue *)auStack144,pLVar5);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CAgent::math_deg((L2CAgent *)auStack144,pLVar5);
  lib::L2CValue::operator=((L2CValue *)auStack144,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,GROUND_TOUCH_FLAG_DOWN);
  lib::L2CValue::operator&(aLStack96,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack64,0.0);
    lib::L2CValue::operator=((L2CValue *)auStack144,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue(aLStack80,_MA_MSC_CMD_EFFECT_EFFECT);
  lib::L2CValue::L2CValue(aLStack160,0xe963002d8);
  lib::L2CValue::L2CValue(aLStack208,0x31ed91fca);
  lib::L2CValue::L2CValue(aLStack336,0.0);
  lib::L2CValue::L2CValue(aLStack352,-2.0);
  lib::L2CValue::L2CValue(aLStack368,0.0);
  lib::L2CValue::L2CValue(aLStack384,0.0);
  lib::L2CValue::L2CValue(aLStack400,0.0);
  lib::L2CValue::L2CValue(aLStack64,0.0);
  lib::L2CValue::operator+((L2CValue *)auStack144,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0.6);
  lib::L2CValue::L2CValue(aLStack432,0.0);
  lib::L2CValue::L2CValue(aLStack448,0.0);
  lib::L2CValue::L2CValue(aLStack464,0.0);
  lib::L2CValue::L2CValue(aLStack480,0.0);
  lib::L2CValue::L2CValue(aLStack496,0.0);
  lib::L2CValue::L2CValue(aLStack512,0.0);
  lib::L2CValue::L2CValue(aLStack528,false);
  FUN_7100028110(aLStack320,param_1,aLStack80,aLStack160,aLStack208,aLStack336,aLStack352,aLStack368
                 ,aLStack384,aLStack400,aLStack416,aLStack64,aLStack432,aLStack448,aLStack464,
                 aLStack480,aLStack496,aLStack512,aLStack528);
  lib::L2CValue::~L2CValue(aLStack320);
  lib::L2CValue::~L2CValue(aLStack528);
  lib::L2CValue::~L2CValue(aLStack512);
  lib::L2CValue::~L2CValue(aLStack496);
  lib::L2CValue::~L2CValue(aLStack480);
  lib::L2CValue::~L2CValue(aLStack464);
  lib::L2CValue::~L2CValue(aLStack448);
  lib::L2CValue::~L2CValue(aLStack432);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack416);
  lib::L2CValue::~L2CValue(aLStack400);
  lib::L2CValue::~L2CValue(aLStack384);
  lib::L2CValue::~L2CValue(aLStack368);
  lib::L2CValue::~L2CValue(aLStack352);
  lib::L2CValue::~L2CValue(aLStack336);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack80);
LAB_7100028a58:
  lib::L2CValue::~L2CValue((L2CValue *)auStack144);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack144 + 0x10));
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

