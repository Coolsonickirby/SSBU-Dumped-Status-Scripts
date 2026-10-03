
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100020ad0(L2CValue *param_1,L2CAgent *param_2,L2CValue *param_3)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  float fVar8;
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
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue(aLStack144,false);
  lib::L2CValue::L2CValue(aLStack160,0);
  lib::L2CValue::L2CValue(aLStack176,0);
  lib::L2CValue::L2CValue(aLStack192,0);
  lib::L2CValue::L2CValue(aLStack96,false);
  lib::L2CValue::operator=(aLStack144,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,0.0);
  lib::L2CValue::operator=(aLStack112,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,0.0);
  lib::L2CValue::operator=(aLStack176,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack224,_FIGHTER_MURABITO_STATUS_SPECIAL_HI_COMMON_INT_FLAP_INTERVAL);
  iVar3 = lib::L2CValue::as_integer(aLStack224);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(param_2->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack208,iVar3);
  lib::L2CValue::L2CValue(aLStack96,0);
  uVar5 = lib::L2CValue::operator<=(aLStack208,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack224);
  }
  else {
    lib::L2CValue::L2CValue(aLStack256,CONTROL_PAD_BUTTON_SPECIAL);
    iVar3 = lib::L2CValue::as_integer(aLStack256);
    bVar1 = app::lua_bind::ControlModule__check_button_on_impl(param_2->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack240,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack96,true);
    uVar5 = lib::L2CValue::operator==(aLStack240,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) {
      pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_2[2].battleObject,0x1f);
      lib::L2CValue::L2CValue(aLStack96,FIGHTER_PAD_FLAG_SPECIAL_TRIGGER);
      lib::L2CValue::operator&(pLVar7,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack272);
      if ((bVar2 & 1U) == 0) {
        pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_2[2].battleObject,0x20);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PAD_FLAG_JUMP_TRIGGER);
        lib::L2CValue::operator&(pLVar7,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack288);
        lib::L2CValue::~L2CValue(aLStack288);
      }
      else {
        bVar1 = 1;
      }
      lib::L2CValue::~L2CValue(aLStack272);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::~L2CValue(aLStack256);
      lib::L2CValue::~L2CValue(aLStack208);
      lib::L2CValue::~L2CValue(aLStack224);
      if ((bVar1 & 1) == 0) goto LAB_7100021270;
    }
    else {
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::~L2CValue(aLStack256);
      lib::L2CValue::~L2CValue(aLStack208);
      lib::L2CValue::~L2CValue(aLStack224);
    }
    lib::L2CValue::L2CValue(aLStack208,_FIGHTER_MURABITO_INSTANCE_WORK_ID_FLOAT_SPECIAL_HI_FRAME);
    iVar3 = lib::L2CValue::as_integer(aLStack208);
    fVar8 = (float)app::lua_bind::WorkModule__get_float_impl(param_2->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack96,fVar8);
    lib::L2CValue::operator=(aLStack160,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::L2CValue(aLStack208,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack224,0xf00a6c580);
    uVar5 = lib::L2CValue::as_integer(aLStack208);
    uVar6 = lib::L2CValue::as_integer(aLStack224);
    fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (param_2->moduleAccessor,uVar5,uVar6);
    lib::L2CValue::L2CValue(aLStack96,fVar8);
    lib::L2CValue::operator=(aLStack192,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::~L2CValue(aLStack208);
    uVar5 = lib::L2CValue::operator<(aLStack192,aLStack160);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue
                (aLStack224,_FIGHTER_MURABITO_INSTANCE_WORK_ID_INT_SPECIAL_HI_BALLOON_NUM);
      iVar3 = lib::L2CValue::as_integer(aLStack224);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(param_2->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack208,iVar3);
      lib::L2CValue::L2CValue(aLStack96,1);
      uVar5 = lib::L2CValue::operator==(aLStack208,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack208);
      lib::L2CValue::~L2CValue(aLStack224);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack208,0x1086bc4a93);
        lib::L2CValue::L2CValue(aLStack224,0xe8024050d);
        uVar5 = lib::L2CValue::as_integer(aLStack208);
        uVar6 = lib::L2CValue::as_integer(aLStack224);
        fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                 (param_2->moduleAccessor,uVar5,uVar6);
        lib::L2CValue::L2CValue(aLStack96,fVar8);
        lib::L2CValue::operator=(aLStack112,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack224);
        lib::L2CValue::~L2CValue(aLStack208);
        lib::L2CValue::L2CValue(aLStack208,0x1086bc4a93);
        lib::L2CValue::L2CValue(aLStack224,0xe81e66f3a);
        uVar5 = lib::L2CValue::as_integer(aLStack208);
        uVar6 = lib::L2CValue::as_integer(aLStack224);
        fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                 (param_2->moduleAccessor,uVar5,uVar6);
        lib::L2CValue::L2CValue(aLStack96,fVar8);
        lib::L2CValue::operator=(aLStack176,aLStack96);
      }
      else {
        lib::L2CValue::L2CValue(aLStack208,0x1086bc4a93);
        lib::L2CValue::L2CValue(aLStack224,0xe192d54b7);
        uVar5 = lib::L2CValue::as_integer(aLStack208);
        uVar6 = lib::L2CValue::as_integer(aLStack224);
        fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                 (param_2->moduleAccessor,uVar5,uVar6);
        lib::L2CValue::L2CValue(aLStack96,fVar8);
        lib::L2CValue::operator=(aLStack112,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack224);
        lib::L2CValue::~L2CValue(aLStack208);
        lib::L2CValue::L2CValue(aLStack208,0x1086bc4a93);
        lib::L2CValue::L2CValue(aLStack224,0xe18ef3e80);
        uVar5 = lib::L2CValue::as_integer(aLStack208);
        uVar6 = lib::L2CValue::as_integer(aLStack224);
        fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                 (param_2->moduleAccessor,uVar5,uVar6);
        lib::L2CValue::L2CValue(aLStack96,fVar8);
        lib::L2CValue::operator=(aLStack176,aLStack96);
      }
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack224);
      lib::L2CValue::~L2CValue(aLStack208);
      fVar8 = (float)app::lua_bind::PostureModule__lr_impl(param_2->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack96,fVar8);
      lib::L2CValue::operator=(aLStack128,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_2[2].battleObject,0x1a);
      lib::L2CValue::L2CValue(aLStack96,0.0);
      uVar5 = lib::L2CValue::operator<(pLVar7,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar5 & 1) == 0) {
        pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_2[2].battleObject,0x1a);
        lib::L2CValue::L2CValue(aLStack96,0.0);
        uVar5 = lib::L2CValue::operator<(aLStack96,pLVar7);
        lib::L2CValue::~L2CValue(aLStack96);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack96,0.0);
          lib::L2CValue::operator=(aLStack112,aLStack96);
          goto LAB_7100021130;
        }
        lib::L2CValue::operator=(aLStack112,aLStack112);
      }
      else {
        lib::L2CValue::operator-(aLStack112);
        lib::L2CValue::operator=(aLStack112,aLStack96);
LAB_7100021130:
        lib::L2CValue::~L2CValue(aLStack96);
      }
      lib::L2CValue::L2CValue(aLStack208,0x1086bc4a93);
      lib::L2CValue::L2CValue(aLStack224,0xd3a2610ed);
      uVar5 = lib::L2CValue::as_integer(aLStack208);
      uVar6 = lib::L2CValue::as_integer(aLStack224);
      iVar3 = app::lua_bind::WorkModule__get_param_int_impl(param_2->moduleAccessor,uVar5,uVar6);
      lib::L2CValue::L2CValue(aLStack96,iVar3);
      lib::L2CValue::L2CValue
                (aLStack240,_FIGHTER_MURABITO_STATUS_SPECIAL_HI_COMMON_INT_FLAP_INTERVAL);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      iVar4 = lib::L2CValue::as_integer(aLStack240);
      app::lua_bind::WorkModule__set_int_impl(param_2->moduleAccessor,iVar3,iVar4);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack224);
      lib::L2CValue::~L2CValue(aLStack208);
      lib::L2CValue::operator-(aLStack160,aLStack192);
      lib::L2CValue::L2CValue(aLStack96,0.0);
      lib::L2CValue::operator+(aLStack224,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MURABITO_INSTANCE_WORK_ID_FLOAT_SPECIAL_HI_FRAME);
      fVar8 = (float)lib::L2CValue::as_number(aLStack208);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__set_float_impl(param_2->moduleAccessor,fVar8,iVar3);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack208);
      lib::L2CValue::~L2CValue(aLStack224);
      lib::L2CValue::operator=(aLStack144,param_3);
    }
  }
LAB_7100021270:
  pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_2[2].battleObject,0x1a);
  lib::L2CValue::L2CValue(aLStack240,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack256,0xdb4df57ab);
  uVar5 = lib::L2CValue::as_integer(aLStack240);
  uVar6 = lib::L2CValue::as_integer(aLStack256);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (param_2->moduleAccessor,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack224,fVar8);
  lib::L2CValue::operator*(pLVar7,aLStack224);
  lib::L2CValue::operator+(aLStack112,aLStack208);
  lib::L2CValue::operator=(aLStack112,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::L2CValue(aLStack96,0.0);
  uVar5 = lib::L2CValue::operator==(aLStack112,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack96,0.0);
    uVar5 = lib::L2CValue::operator==(aLStack176,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar5 & 1) != 0) goto LAB_71000213c0;
  }
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
  lib::L2CAgent::clear_lua_stack(param_2);
  lib::L2CAgent::push_lua_stack(param_2,aLStack96);
  lib::L2CAgent::push_lua_stack(param_2,aLStack112);
  lib::L2CAgent::push_lua_stack(param_2,aLStack176);
  app::sv_kinetic_energy::add_speed(param_2->luaStateAgent);
  lib::L2CValue::~L2CValue(aLStack96);
LAB_71000213c0:
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar5 = lib::L2CValue::operator==(aLStack144,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(param_1,0);
  }
  else {
    lib::L2CValue::L2CValue(aLStack304,_FIGHTER_MURABITO_STATUS_KIND_SPECIAL_HI_FLAP);
    lib::L2CValue::L2CValue(aLStack320,true);
    lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0xd0,(L2CValue)0xc0);
    lib::L2CValue::~L2CValue(aLStack320);
    lib::L2CValue::~L2CValue(aLStack304);
    lib::L2CValue::L2CValue(param_1,1);
  }
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  return;
}

