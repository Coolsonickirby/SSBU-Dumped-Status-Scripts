
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_7100003000(L2CFighterReflet *this,L2CValue *return_value)

{
  L2CValue *this_00;
  bool bVar1;
  int iVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  ulong uVar5;
  float fVar6;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_REFLET_INSTANCE_WORK_ID_FLAG_AIR_SMASH);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::~L2CValue(aLStack80);
  this_00 = &this->globalTable;
  pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x20);
  lib::L2CValue::L2CValue(aLStack80,FIGHTER_PAD_CMD_CAT1_FLAG_ATTACK_S4);
  lib::L2CValue::operator&(pLVar3,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack96);
  if ((bVar1 & 1U) == 0) {
    pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x20);
    lib::L2CValue::L2CValue(aLStack80,FIGHTER_PAD_CMD_CAT1_FLAG_ATTACK_HI4);
    lib::L2CValue::operator&(pLVar3,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack112);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::~L2CValue(aLStack112);
      goto LAB_71000030e0;
    }
    pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x20);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT1_FLAG_ATTACK_LW4);
    lib::L2CValue::operator&(pLVar3,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack128);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((bVar1 & 1U) == 0) goto LAB_7100003114;
  }
  else {
LAB_71000030e0:
    lib::L2CValue::~L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_REFLET_INSTANCE_WORK_ID_FLAG_AIR_SMASH);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::~L2CValue(aLStack80);
LAB_7100003114:
  pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,9);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_JUMP);
  uVar4 = lib::L2CValue::operator==(pLVar3,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,0x1095b52773);
    lib::L2CValue::L2CValue(aLStack112,0);
    uVar4 = lib::L2CValue::as_integer(aLStack80);
    uVar5 = lib::L2CValue::as_integer(aLStack112);
    iVar2 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar4,uVar5);
    lib::L2CValue::L2CValue(aLStack96,iVar2);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack80);
    fVar6 = (float)app::lua_bind::FighterControlModuleImpl__get_param_attack_hi4_flick_y_impl
                             (this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack112,fVar6);
    pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0xe);
    lib::L2CValue::operator+(aLStack96,pLVar3);
    lib::L2CValue::L2CValue(aLStack80,1);
    lib::L2CValue::operator+(aLStack144,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    uVar4 = lib::L2CValue::operator<=(aLStack128,aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack144);
    if ((uVar4 & 1) != 0) {
      pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x21);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT2_FLAG_ATTACK_DASH_ATTACK_HI4);
      lib::L2CValue::operator&(pLVar3,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack128);
      lib::L2CValue::~L2CValue(aLStack128);
      if ((bVar1 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_REFLET_INSTANCE_WORK_ID_FLAG_AIR_SMASH);
        iVar2 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar2);
        lib::L2CValue::~L2CValue(aLStack80);
      }
    }
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack96);
  }
  pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,9);
  lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_JUMP_AERIAL);
  uVar4 = lib::L2CValue::operator==(pLVar3,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar4 & 1) != 0) {
    fVar6 = (float)app::lua_bind::FighterControlModuleImpl__get_param_attack_hi4_flick_y_impl
                             (this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack96,fVar6);
    pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0xe);
    lib::L2CValue::L2CValue(aLStack80,1);
    lib::L2CValue::operator+(pLVar3,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    uVar4 = lib::L2CValue::operator<=(aLStack112,aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar4 & 1) != 0) {
      pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x21);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT2_FLAG_ATTACK_DASH_ATTACK_HI4);
      lib::L2CValue::operator&(pLVar3,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((bVar1 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_REFLET_INSTANCE_WORK_ID_FLAG_AIR_SMASH);
        iVar2 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar2);
        lib::L2CValue::~L2CValue(aLStack80);
      }
    }
    lib::L2CValue::~L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,false);
  return;
}

