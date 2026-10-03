
void FUN_7100025320(L2CValue *param_1,long param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  L2CValue *this;
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
  L2CValue aLStack64 [16];
  
  bVar1 = app::lua_bind::StatusModule__is_changing_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40));
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((bVar2 & 1U) == 0) {
    iVar3 = app::lua_bind::ComboModule__count_impl(*(BattleObjectModuleAccessor **)(param_2 + 0x40))
    ;
    lib::L2CValue::L2CValue(aLStack112,iVar3);
    lib::L2CValue::L2CValue(aLStack144,0x109a712db9);
    lib::L2CValue::L2CValue(aLStack160,0);
    uVar4 = lib::L2CValue::as_integer(aLStack144);
    uVar5 = lib::L2CValue::as_integer(aLStack160);
    iVar3 = app::lua_bind::WorkModule__get_param_int_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar4,uVar5);
    lib::L2CValue::L2CValue(aLStack128,iVar3);
    uVar4 = lib::L2CValue::operator<(aLStack112,aLStack128);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack144);
      this = aLStack112;
    }
    else {
      lib::L2CValue::L2CValue(aLStack192,FIGHTER_STATUS_ATTACK_FLAG_CONNECT_COMBO);
      iVar3 = lib::L2CValue::as_integer(aLStack192);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl
                        (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
      lib::L2CValue::L2CValue(aLStack176,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack64,true);
      uVar4 = lib::L2CValue::operator==(aLStack176,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar4 & 1) == 0) goto LAB_7100025518;
      lib::L2CValue::L2CValue(aLStack208,0xb4f4e6f8f);
      lib::L2CValue::L2CValue(aLStack224,0xb4823ab96);
      FUN_710001ce50(param_2,aLStack208,aLStack224);
      lib::L2CValue::~L2CValue(aLStack224);
      this = aLStack208;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,0xb4f4e6f8f);
    lib::L2CValue::L2CValue(aLStack96,0xb4823ab96);
    FUN_710001ce50(param_2,aLStack80,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    this = aLStack80;
  }
  lib::L2CValue::~L2CValue(this);
LAB_7100025518:
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

