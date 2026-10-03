
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710005abc0(L2CValue *param_1,L2CFighterCommon *param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  ulong uVar6;
  float fVar7;
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
  
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_WALK);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__is_enable_transition_term_impl(param_2->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((bVar2 & 1U) != 0) {
    lua2cpp::L2CFighterCommon::sub_check_command_walk(param_2);
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue
                (aLStack80,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_CLEAR_COMMAND_MOVE);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__on_flag_impl(param_2->moduleAccessor,iVar3);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_TANTAN_STATUS_KIND_ATTACK_WALK);
      lib::L2CValue::L2CValue(aLStack128,false);
      lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x90,(L2CValue)0x80);
      lib::L2CValue::~L2CValue(aLStack128);
      pLVar4 = aLStack112;
LAB_710005acbc:
      lib::L2CValue::~L2CValue(pLVar4);
      bVar2 = true;
      goto LAB_710005aea4;
    }
    pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_2->globalTable,0x1a);
    fVar7 = (float)app::lua_bind::PostureModule__lr_impl(param_2->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack144,fVar7);
    lib::L2CValue::operator-(aLStack144);
    lib::L2CValue::operator*(pLVar4,aLStack96);
    lib::L2CValue::L2CValue(aLStack176,0x6e5ec7051);
    lib::L2CValue::L2CValue(aLStack192,0xcf44ba9e5);
    uVar5 = lib::L2CValue::as_integer(aLStack176);
    uVar6 = lib::L2CValue::as_integer(aLStack192);
    fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (param_2->moduleAccessor,uVar5,uVar6);
    lib::L2CValue::L2CValue(aLStack160,fVar7);
    uVar5 = lib::L2CValue::operator<=(aLStack160,aLStack80);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack144);
    if ((uVar5 & 1) != 0) {
      pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_2->globalTable,0x1b);
      lib::L2CValue::L2CValue(aLStack96,0x6e5ec7051);
      lib::L2CValue::L2CValue(aLStack144,0xd87461d6d);
      uVar5 = lib::L2CValue::as_integer(aLStack96);
      uVar6 = lib::L2CValue::as_integer(aLStack144);
      fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (param_2->moduleAccessor,uVar5,uVar6);
      lib::L2CValue::L2CValue(aLStack80,fVar7);
      uVar5 = lib::L2CValue::operator<(aLStack80,pLVar4);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue
                  (aLStack80,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_CLEAR_COMMAND_MOVE);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__on_flag_impl(param_2->moduleAccessor,iVar3);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack208,_FIGHTER_TANTAN_STATUS_KIND_ATTACK_WALK_BACK);
        lib::L2CValue::L2CValue(aLStack224,false);
        lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x30,(L2CValue)0x20);
        lib::L2CValue::~L2CValue(aLStack224);
        pLVar4 = aLStack208;
        goto LAB_710005acbc;
      }
    }
  }
  bVar2 = false;
LAB_710005aea4:
  lib::L2CValue::L2CValue(param_1,bVar2);
  return;
}

