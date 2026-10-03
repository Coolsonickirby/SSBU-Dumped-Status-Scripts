
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100022520(L2CValue *param_1,L2CFighterCommon *param_2)

{
  L2CValue *this;
  bool bVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  BattleObjectModuleAccessor *pBVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  float fVar8;
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
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,LINK_NO_CAPTURE);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  uVar3 = app::lua_bind::LinkModule__get_node_object_id_impl(param_2->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack96,uVar3);
  lib::L2CValue::~L2CValue(aLStack80);
  uVar3 = lib::L2CValue::as_integer(aLStack96);
  pvVar4 = (void *)app::sv_battle_object::module_accessor(uVar3);
  if (pvVar4 == (void *)0x0) {
    lib::L2CValue::L2CValue(aLStack112,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,pvVar4);
  }
  lib::L2CValue::L2CValue(aLStack144,0);
  iVar2 = lib::L2CValue::as_integer(aLStack144);
  pBVar5 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack112);
  fVar8 = (float)app::lua_bind::ControlModule__get_clatter_time_impl(pBVar5,iVar2);
  lib::L2CValue::L2CValue(aLStack128,fVar8);
  lib::L2CValue::L2CValue(aLStack80,0.0);
  uVar6 = lib::L2CValue::operator<=(aLStack128,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack144);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(param_1,0);
    goto LAB_71000229fc;
  }
  this = &param_2->globalTable;
  pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x21);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT2_FLAG_THROW_F);
  lib::L2CValue::operator&(pLVar7,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x21);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT2_FLAG_THROW_B);
  lib::L2CValue::operator&(pLVar7,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x21);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT2_FLAG_THROW_HI);
  lib::L2CValue::operator&(pLVar7,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x21);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT2_FLAG_THROW_LW);
  lib::L2CValue::operator&(pLVar7,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lua2cpp::L2CFighterCommon::IsThrowStick(param_2);
  lib::L2CValue::L2CValue
            (aLStack208,
             FIGHTER_PAD_CMD_CAT1_FLAG_SPECIAL_S | FIGHTER_PAD_CMD_CAT1_FLAG_SPECIAL_N |
             _FIGHTER_PAD_CMD_CAT1_FLAG_SPECIAL_HI | _FIGHTER_PAD_CMD_CAT1_FLAG_SPECIAL_LW);
  pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x20);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT1_FLAG_ATTACK_N);
  lib::L2CValue::operator|(aLStack80,aLStack208);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::operator&(pLVar7,aLStack240);
  lib::L2CValue::~L2CValue(aLStack240);
  bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack224);
  if ((bVar1 & 1U) == 0) {
LAB_71000227f0:
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack224);
    if ((bVar1 & 1U) == 0) {
LAB_710002286c:
      bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack224);
      if ((bVar1 & 1U) == 0) {
LAB_71000228e8:
        bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack224);
        if ((bVar1 & 1U) == 0) {
LAB_7100022964:
          bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack224);
          if ((bVar1 & 1U) == 0) {
            lib::L2CValue::L2CValue(param_1,0);
          }
          else {
            lib::L2CValue::L2CValue(aLStack384,_FIGHTER_DONKEY_STATUS_KIND_THROW_F_F);
            lib::L2CValue::L2CValue(aLStack400,true);
            lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x80,(L2CValue)0x70);
            lib::L2CValue::~L2CValue(aLStack400);
            lib::L2CValue::~L2CValue(aLStack384);
            lib::L2CValue::L2CValue(param_1,1);
          }
        }
        else {
          bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack176);
          if ((bVar1 & 1U) == 0) {
            pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack192,0x246f0d2cb);
            bVar1 = lib::L2CValue::operator.cast.to.bool(pLVar7);
            if ((bVar1 & 1U) == 0) goto LAB_7100022964;
          }
          lib::L2CValue::L2CValue(aLStack352,_FIGHTER_DONKEY_STATUS_KIND_THROW_F_LW);
          lib::L2CValue::L2CValue(aLStack368,true);
          lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0xa0,(L2CValue)0x90);
          lib::L2CValue::~L2CValue(aLStack368);
          lib::L2CValue::~L2CValue(aLStack352);
          lib::L2CValue::L2CValue(param_1,1);
        }
      }
      else {
        bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack160);
        if ((bVar1 & 1U) == 0) {
          pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack192,0x2d8932aac);
          bVar1 = lib::L2CValue::operator.cast.to.bool(pLVar7);
          if ((bVar1 & 1U) == 0) goto LAB_71000228e8;
        }
        lib::L2CValue::L2CValue(aLStack320,_FIGHTER_DONKEY_STATUS_KIND_THROW_F_HI);
        lib::L2CValue::L2CValue(aLStack336,true);
        lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0xc0,(L2CValue)0xb0);
        lib::L2CValue::~L2CValue(aLStack336);
        lib::L2CValue::~L2CValue(aLStack320);
        lib::L2CValue::L2CValue(param_1,1);
      }
    }
    else {
      bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack144);
      if ((bVar1 & 1U) == 0) {
        pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack192,0x171beeff9);
        bVar1 = lib::L2CValue::operator.cast.to.bool(pLVar7);
        if ((bVar1 & 1U) == 0) goto LAB_710002286c;
      }
      lib::L2CValue::L2CValue(aLStack288,_FIGHTER_DONKEY_STATUS_KIND_THROW_F_B);
      lib::L2CValue::L2CValue(aLStack304,true);
      lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0xe0,(L2CValue)0xd0);
      lib::L2CValue::~L2CValue(aLStack304);
      lib::L2CValue::~L2CValue(aLStack288);
      lib::L2CValue::L2CValue(param_1,1);
    }
  }
  else {
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack128);
    if ((bVar1 & 1U) == 0) {
      pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack192,0x176d32be0);
      bVar1 = lib::L2CValue::operator.cast.to.bool(pLVar7);
      if ((bVar1 & 1U) == 0) goto LAB_71000227f0;
    }
    lib::L2CValue::L2CValue(aLStack256,_FIGHTER_DONKEY_STATUS_KIND_THROW_F_F);
    lib::L2CValue::L2CValue(aLStack272,true);
    lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x0,(L2CValue)0xf0);
    lib::L2CValue::~L2CValue(aLStack272);
    lib::L2CValue::~L2CValue(aLStack256);
    lib::L2CValue::L2CValue(param_1,1);
  }
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
LAB_71000229fc:
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

