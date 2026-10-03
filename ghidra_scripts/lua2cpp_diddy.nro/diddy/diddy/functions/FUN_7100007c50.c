
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_7100007c50(L2CFighterDiddy *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  L2CAgent *this_01;
  ulong uVar6;
  float fVar7;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  this_00 = &this->globalTable;
  pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,9);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_REBIRTH);
  uVar5 = lib::L2CValue::operator==(pLVar4,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar5 & 1) == 0) {
    pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
    uVar5 = lib::L2CValue::operator==(pLVar4,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_DIDDY_INSTANCE_WORK_ID_FLAG_SPECIAL_INPUT_UNABLE);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((bVar2 & 1U) == 0) {
        pLVar4 = (L2CValue *)0x1a;
        this_01 = (L2CAgent *)lib::L2CValue::operator[]((L2CValue *)this_00,0x1a);
        lib::L2CAgent::math_abs(this_01,pLVar4);
        lib::L2CValue::L2CValue(aLStack112,0x6e5ec7051);
        lib::L2CValue::L2CValue(aLStack128,0xf929dd70f);
        uVar5 = lib::L2CValue::as_integer(aLStack112);
        uVar6 = lib::L2CValue::as_integer(aLStack128);
        fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                 (this->moduleAccessor,uVar5,uVar6);
        lib::L2CValue::L2CValue(aLStack96,fVar7);
        uVar5 = lib::L2CValue::operator<=(aLStack96,aLStack80);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack80);
        if ((uVar5 & 1) == 0) {
          pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x1b);
          lib::L2CValue::L2CValue(aLStack96,0x6e5ec7051);
          lib::L2CValue::L2CValue(aLStack112,0xfe59ae799);
          uVar5 = lib::L2CValue::as_integer(aLStack96);
          uVar6 = lib::L2CValue::as_integer(aLStack112);
          fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                   (this->moduleAccessor,uVar5,uVar6);
          lib::L2CValue::L2CValue(aLStack80,fVar7);
          uVar5 = lib::L2CValue::operator<=(aLStack80,pLVar4);
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::~L2CValue(aLStack112);
          lib::L2CValue::~L2CValue(aLStack96);
          if ((uVar5 & 1) == 0) goto LAB_7100007e74;
        }
      }
      iVar3 = 0;
      goto LAB_7100007e7c;
    }
  }
LAB_7100007e74:
  iVar3 = 1;
LAB_7100007e7c:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}

